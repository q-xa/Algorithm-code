#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,b=0,c=0,e;
	cin>>n>>k;
	long long a[n+5],d[n+5];
	d[0]=0;
	for(long long i=1;i<n;i++)
	{
		cin>>a[i];
		d[i]=d[i-1]+a[i];
		b=b+a[i];
	}
	for(long long i=0;i+k<n;i++)
	{
		c=max(d[i+k]-d[i],c);
	}
	e=b-c;
	cout<<e;
	return 0;
}
