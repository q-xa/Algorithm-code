#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,q;
		cin>>n>>q;
		long long a[n+5],b[n+5];
		b[0]=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		long long j=1;
		for(int i=n;i>0;i--)
		{
			b[j]=b[j-1]+a[i];
			j++;
		}
		for(int i=0;i<q;i++)
		{
			long long c;
			cin>>c;
			int l=1,r=n;
			while(l<r)
			{
				int mid=l+r>>1;
				if(b[mid]>=c) r=mid;
				else l=mid+1;
			}
			if(b[l]>=c)
			{
				cout<<l<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
	}
	return 0;
}

