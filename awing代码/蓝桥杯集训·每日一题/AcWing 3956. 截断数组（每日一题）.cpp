#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5],b[n+5];
	b[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	long long d=0,e=0;
	if(b[n]%3==0)
	{
		long long c=b[n]/3;
		for(int i=1;i<n-1;i++)
		{
			if(b[i]==c)
			{
				d++;
			}
			if(b[n]-b[i+1]==c)
			{
				e=e+d;
			}
		}
	}
	cout<<e;
	return 0;
}
