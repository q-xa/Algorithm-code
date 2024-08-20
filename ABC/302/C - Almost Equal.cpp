#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+4;
long long kmp[N+4];
string s1[10],s2;
long long n,m,f;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	sort(s1,s1+n);
	do{
		f=1;
		for(int i=0;i<n-1;i++)
		{
			int k=0;
			for(int j=0;j<m;j++)
			{
				if(s1[i][j]!=s1[i+1][j])
				{
					k++;
				}
				if(k>1)
				{
					f=0;
				}
			}
		}
			if(f==1)
			{
				cout<<"Yes";
				return 0;
			}		
	}while(next_permutation(s1,s1+n));
	cout<<"No";
	return 0;
}
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

