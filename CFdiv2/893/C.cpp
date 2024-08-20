#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	while(n--)
	{
		cin>>m;
		map<int,int>mp;
		long long c;
		for(int i=1;i<=m;i++)
		{
			if(mp[i]==1)
			{
				continue;
			}
			else
			{
				cout<<i<<" ";
				mp[i]=1;
			}
			c=i;
			while(c*2<=m)
			{
			    c=c*2;
				mp[c]=1; 
				cout<<c<<" ";	
			}
		}
		cout<<endl;
	}
	return 0;
}
