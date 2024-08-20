#include<bits/stdc++.h>
using namespace std;
int p[6000];
int find(int x)
{
	if(p[x]!=x) p[x]=find(p[x]);
	return p[x];
}
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=0;i<=n;i++) p[i]=i;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		p[find(x)]=find(y);
	}	
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		cout<<(find(x)==find(y)?"Yes":"No")<<endl;
	}
	return 0;
}
