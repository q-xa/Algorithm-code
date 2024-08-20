#include<bits/stdc++.h>
using namespace std;
int p[1005];
int n,m,a,b,c;
int find(int x)
{
	if(p[x]!=x) p[x]=find(p[x]);
	return p[x];
}
int main()
{
	while(1)
	{
		cin>>n;
		if(n==0)
		{
			return 0;
		}
		cin>>m;
		c=n-1;
		for(int i=1;i<=n;i++)
		{
			p[i]=i;
		}
		while(m--)
		{
			cin>>a>>b;
			if(find(a)!=find(b))
			{
				c--; 
				p[find(a)]=find(b);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
