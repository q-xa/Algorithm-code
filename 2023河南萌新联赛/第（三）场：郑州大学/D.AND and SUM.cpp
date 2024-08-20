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
	while(n--)
	{
		long long a,s;
		cin>>a>>s;
		if(a>s/2)
		{
			cout<<"No"<<endl;
		}
		else
		{
			int k=0;
//			for(int i=a;i<=a*10;i++)
//			{
			    int c=a&(s-a);
				if(c==a)
				{
					k=1;
					cout<<"Yes"<<endl;
//					break;
				}
//			}
			if(k==0)
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}

