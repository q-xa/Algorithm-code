/**
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  ████━████+
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + +Code is far away from 　
*　　　┃　　　┃ + bug with the animal protecting
*　　　┃　 　 ┗━━━┓ 神兽保佑,代码无bug　
*　　　┃ 　	　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/
#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+4;
long long kmp[N+4];
string s1,s2;
long long n,m,k,H;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k>>H;
		long long a[n+4];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long b=0;
		for(int i=0;i<n;i++)
		{
			if(abs(a[i]-H)%k==0)
			{
				if(abs(a[i]-H)/k<m&&abs(a[i]-H)/k>=1)
				b++;
			}
		}
		cout<<b<<endl;
	} 
	return 0;
}

