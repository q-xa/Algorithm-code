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
	cin>>n>>m;
	char a1[n+3][m+4],a2[n+3][m+4];
	long long b1[n+3],b2[n+5];
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<m;j++)
		{
			cin>>a1[i][j];
			if(a1[i][j]=='+')
			{
				c++;
			}
		}
		b1[i]=c;
	}
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<m;j++)
		{
			cin>>a2[i][j];
			if(a2[i][j]=='+')
			{
				c++;
			}
		}
		b2[i]=c;
	}
	sort(b1,b1+n);
	sort(b2,b2+n);
	for(int i=0;i<n;i++)
	{
		if(b1[i]!=b2[i])
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}
