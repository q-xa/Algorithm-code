#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n+1][90005];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0,c[90005];
	for(int i=1;i<n;i++)
	{
		while(1)
		{
			if(a[i][j]!=a[0][j])
			{
				c[i]=j;
				j=0;
				break;
			}
			else
			{
				j++;
			}
		}
	}
	int o,p;
	o=c[1];
	for(int i=2;i<n;i++)
	{
		if(c[i]<o)
		{
			p=o;
			o=c[i];
			c[i]=p;
		}
	}
	cout<<o;
	return 0;
}
