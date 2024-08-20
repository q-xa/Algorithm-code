#include<bits/stdc++.h>
using namespace std;
const int N=2e5+4;
int p[N];
int find(int x)
{
	if(p[x]!=x) p[x]=find(p[x]);
	return p[x];
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++) p[i]=i;
	while(m--)
	{
		int x,y,z;
		cin>>z>>x>>y;
		if(z==1)
		{
			p[find(x)]=find(y);
		}
		else
		{
			cout<<(find(x)==find(y)?"Y":"N")<<endl;
		}
	}
	return 0;
}
