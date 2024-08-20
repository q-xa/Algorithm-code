#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n,a[N];
bool s[N];
void dfs(int u)
{
	if(u==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		if(!s[i])
		{
			a[u]=i;
			s[i]=true;
			dfs(u+1);
			s[i]=false;
		}
	}
}

int main()
{
	cin>>n;
	dfs(0);
	return 0;
}
