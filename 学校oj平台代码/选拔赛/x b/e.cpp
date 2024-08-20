#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n+5],b[n+5],c[n+6];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	long long d1,d2;
	d1=b[n-1];
	d2=b[n-2];
	for(int i=0;i<n;i++)
	{
		if(a[i]==d1)
		{
			c[i]=a[i]-d2;
		}
		else
		{
			c[i]=a[i]-d1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
