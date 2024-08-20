#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+4];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int b[n+3];
		for(int i=0;i<n-1;i++)
		{
			b[i]=abs(a[i]-a[i+1]);
		}
		sort(b,b+n-1);
//		for(int i=0;i<n-1;i++)
//		{
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
		int ans=0;
		for(int i=0;i<n-k;i++)
		{
			ans+=b[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
