#include<bits/stdc++.h>
using namespace std;
int n,c=3333;
long long a[15],b[15];
void dfs(int j,int x,int y)
{
	if(j>=n)
	{
		c=min(c,abs(x-y));
	    return;
	}
	dfs(j+1,x*a[j],y+b[j]);
	dfs(j+1,x,y);
}
int main()
{	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	dfs(0,1,0);
	cout<<c;
	return 0;
}
