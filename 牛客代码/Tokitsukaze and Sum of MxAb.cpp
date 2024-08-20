#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int b1,b2;
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				b1=abs(a[i]-a[j]);
				b2=abs(a[i]+a[j]);
				if(b1>b2)
				{
					c=c+b1*2;
				}
				else
				{
					c=c+b2*2;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			b1=abs(a[i]-a[i]);
			b2=abs(a[i]+a[i]);
			if(b1>b2)
			{
				c=c-b1;
			}
			else
			{
				c=c-b2;
			}	
		}
		cout<<c<<endl;
	}
	return 0;
}
