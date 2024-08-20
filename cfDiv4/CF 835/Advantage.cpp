#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;cin>>n;
		long long a[n+5],b[n+3];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
//		for(int i=0;i<n;i++)
//		{
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
		for(int i=0;i<n;i++)
		{
			if(a[i]==b[n-1])
			{
				cout<<a[i]-b[n-2]<<" ";
			}
			else
			{
				cout<<a[i]-b[n-1]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
