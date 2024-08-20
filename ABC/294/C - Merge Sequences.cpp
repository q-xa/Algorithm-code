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
	long long a[n+3],b[m+3],c[n+m+3];
	int d=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[d]=a[i];
		d++;
	}
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
		c[d]=b[j];
		d++;
	}
	sort(c+1,c+d);
//	for(int i=1;i<d;i++)
//	{
//		cout<<c[i]<<" ";
//	}cout<<endl;
	int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=k;j<=d;j++)
		{
			if(c[j]==a[i])
			{
				a[i]=j;
				k=j;
				c[j]=-1;
				break;
			}
		}
	}
	k=1;
	for(int i=0;i<m;i++)
	{
		for(int j=k;j<=d;j++)
		{
			if(c[j]==b[i])
			{
				b[i]=j;
				k=j;
				c[j]=-1;
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int j=0;j<m;j++)
	{
		cout<<b[j]<<" ";
	}
	return 0;
}
