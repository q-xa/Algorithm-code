#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+4;
long long kmp[N+4];
string s1="snuke";
string a[200];
long long n,m;
long long dx[] = { -1, 0, 1, -1, 1, -1, 0, 1};
long long dy[] = { -1, -1, -1, 0, 0, 1, 1, 1};
int s[8][8];
void dfs(int i,int j,int k,int l)
{
	if(a[i][j]!=s1[k])
	{
		return;
	}
	s[k][0]=i;
	s[k][1]=j;
	if(k==4)
	{
		for(int o=0;o<5;o++)
		{
			cout<<s[o][0]+1<<" "<<s[o][1]+1<<endl;
		}
	}
	long long tx = i + dx[l], ty = j + dy[l];
	if (tx >= 0 && tx < n && ty >= 0 && ty < m) 
	{
		dfs(tx, ty, k+1, l);
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int l=0;l<8;l++)
			dfs(i,j,0,l);
		}
	}
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

