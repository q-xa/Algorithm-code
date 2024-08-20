#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,p;
	cin>>n>>p;
	long long a[n+3];
	long long l=0,r=0,he=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(r<a[i])
		{
			r=a[i];
		}
		he=he+a[i]*2;
	}
	if(he<p)
	{
		cout<<"-1";
		return 0;
	}
	else if(he==p)
	{
		cout<<"0";
		return 0;
	}
	while(l<=r)
	{
		long long mid=r+l>>1;
		he=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]-mid>0)
			{
				he=he+(a[i]-mid)*2;
			}
		}
		if(he>p) l=mid+1;
		else if(he<p) r=mid-1;
	}
	cout<<r;
	return 0;
}
