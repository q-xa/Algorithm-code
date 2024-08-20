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
long long n,m;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n+3],b[n+34];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);int o=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]%2==0)
			{
				if(a[i]%2!=0)
				{
					cout<<"NO"<<endl;o=1;
					break;
				}
			}
			else
			{
				if(a[i]%2==0)
				{
					cout<<"NO"<<endl;o=1;
					break;
				}
			}
		}
		if(o==0)
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

