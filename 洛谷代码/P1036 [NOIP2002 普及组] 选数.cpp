#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+5;
int main()
{
	int n,k;
	cin>>n>>k;
	long long a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long b[N],c=0;
	for(int i=0;i<N;i++)
	{
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int r=j;r<j+k;r++)
			{
				if(r<n)
				{
					b[c]=b[c]+a[r];
				}
			}
			c++;
		}
	}
	int e=0;
	for(int i=0;i<c;i++)
	{
		for(int j=2;j<b[i]/2;j++)
		{
			if(b[i]%j==0)
			{
				e++;
				break;
			}
		}
	}
	cout<<e;
	return 0;
}
