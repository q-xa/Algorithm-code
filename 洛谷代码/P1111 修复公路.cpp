#include<bits/stdc++.h>
using namespace std;
int p[600000];
int n,m;
struct chu
{
	int x,y,t;
}chun[600000];
bool cmp(chu a,chu b)
{
	return a.t<b.t;
}
int find(int x)
{
	if(p[x]!=x) 
	{
	p[x]=find(p[x]);	
	}
	return p[x];
}
int main()
{

	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>chun[i].x>>chun[i].y>>chun[i].t;
	}
	for(int i=0;i<=n;i++)
	{
		p[i]=i;
	}
	sort(chun+1,chun+m+1,cmp);
	long long g;
	for(int i=1;i<=m;i++)
	{
		if(find(chun[i].x)!=find(chun[i].y))
		n--; 
		p[find(chun[i].x)]=find(chun[i].y);
		g=chun[i].t;
		if(n==1)
		{
			cout<<g<<endl;
			return 0;
		}
	}
	cout<<"-1"<<endl;
	return 0;
}
