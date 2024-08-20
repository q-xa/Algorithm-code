#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];
int a[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long b[n+3],c[n+3];
		map<int,int>mp;
		for(int i=0;i<=n;i++)
		{
			c[i]=1;
		}
		for(int i=1;i<n;i++)
		{
			int l,k;
			cin>>l>>k;
			c[k]+=c[l];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		sort(b+1,b+1+n);
		sort(c+1,c+n+1);
		long long he=0;
		for(int i=1;i<=n;i++)
		{
			he=he+c[i]*b[i];
		}
		cout<<he<<endl;
	}
	return 0;
}