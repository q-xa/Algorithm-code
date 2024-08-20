#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+8];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long b1=0,b2=0,c=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]%2==0)
			{
				b1=b1+a[i];
			}
			else 
			{
				b2=b2+a[i];
			}
		}
		if(b1<=b2)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
