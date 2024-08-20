#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>mp;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,q;
		cin>>n>>k>>q;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[i]=-1;
		}
		int o=0,b;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=q&&o==0)
			{
				b=i;
				mp[i]=i;
				o=1;
			}
			else if(a[i]<=q&&o==1)
			{
				mp[b]=i;
			}
			else if(a[i]>q)
			{
				o=0;
			}
		}
		long long he=0;
		for(int i=0;i<n;i++)
		{
			if(mp[i]-i+1>=k&&mp[i]!=-1)
			{
				int c=(mp[i]-i+1)-k+1;
				while(c)
				{
					he=he+c;
					c--;
				}
				
			}
		}
		cout<<he<<endl;
	}
	return 0;
}
