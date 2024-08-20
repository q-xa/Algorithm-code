#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,p;
int pi[N];
int a,b;
int find(int x)
{
	if(x!=pi[x]) pi[x]=find(pi[x]);
	return pi[x];
}
int main()
{
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++) pi[i]=i;
	while(m--)
	{
		cin>>a>>b;
		pi[find(b)]=find(a);
	}
	while(p--)
	{
		cin>>a>>b;
		cout<<(find(a)==find(b)?"Yes":"No")<<endl;
	}
	return 0;
}
