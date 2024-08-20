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
string s1[10],s2;
int n,m;
int main()
{
	cin>>n;
	while(n--)
	{
		for(int i=0;i<8;i++)
		{
			cin>>s1[i];
		}
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(s1[j][i]!='.')
				{
					cout<<s1[j][i];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

