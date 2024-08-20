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
	cin>>n;
	long long a[n+3];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			if(j*j==a[i])
			{
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}

