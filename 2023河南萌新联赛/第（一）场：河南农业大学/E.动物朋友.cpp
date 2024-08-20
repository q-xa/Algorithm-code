#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n+45],b[n+43];
	b[0]=0;
	map<int,int> mp;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
		mp[b[i]]++;
	}
	int o=0;
	for(int i=1;i<=n;i++)
	{
		if(mp[b[i]-m]!=0)
		{
			o++;
		}
	}
	cout<<o;
	return 0;
}
