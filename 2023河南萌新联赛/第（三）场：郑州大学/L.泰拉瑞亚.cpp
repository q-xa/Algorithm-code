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
	cin>>n>>m;
	int a[n+3],b[n+4];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	long long cs=0,j=n-1;
	while(m>0)
	{
		if(j>=0&&(b[j]>a[n-1]||m-b[j]<=0))
		{
			m=m-b[j];
			cs++;
			j--;
		}
		else
		{
			m=m-a[n-1];
			cs++;
		}
	}
	cout<<cs<<endl;
	return 0;
}

