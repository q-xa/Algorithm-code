#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	long long h=0;
	cin>>m>>n;
	int xx[m+6],xs[n+5];
	for(int i=0;i<m;i++)
	{
		cin>>xx[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>xs[i];
	}
	sort(xx,xx+m);
	for(int i=0;i<n;i++)
	{
		int l=0,r=m-1;
		while(l<r)
		{
			int k=(l+r)/2;
			if(xs[i]>xx[k]) l=k+1;
			else r=k;
		}
		if(xs[i]<xx[0])
		{
			h=h+(xx[0]-xs[i]);
		}
		else
		{
			h+=min(min(abs(xs[i]-xx[l]),abs(xs[i]-xx[l-1])),abs(xs[i]-xx[l+1]));;
		}
	}
	cout<<h;
	return 0;
}
