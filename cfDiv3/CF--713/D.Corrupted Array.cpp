#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n+4];
		for(int i=0;i<n+2;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n+2);
		long long c=0,d=0;
		for(int i=0;i<n+1;i++)
		{
			c=c+a[i];
		}
		for(int i=0;i<n;i++)
		{
			d=d+a[i];
		}
		if(d==a[n])
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
			continue;
		}
		int y=0;
		for(int i=0;i<n+1;i++)
		{
			if(c==a[n+1]+a[i]&&y==0)
			{
				y=1;
			}
		}
		int o=0;
		if(y==0)
		{
			cout<<"-1";
		}
		else
		{
			for(int i=0;i<n+1;i++)
			{
				if(c-a[n+1]==a[i]&&o==0)
				{
					o=1;
				}
				else
				{
					cout<<a[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
