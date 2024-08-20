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
int next[N+4];
string s1,s2;
int n,m;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>m;
		int i=0,cun=0,k;
		while(m--)
		{
		    i++;
			int a,b;
			cin>>a>>b;
			if(a<=10)
			{
				
				if(b>cun)
				{
					cun=b;
					k=i;
				}
			}
		}
		cout<<k<<endl;
	}
	return 0;
}

