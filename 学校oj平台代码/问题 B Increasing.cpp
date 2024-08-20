#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
while(t--)
{
	cin>>n;
	long long a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<=a[i-1])
		{
			cout<<"N0"<<endl;
			c=1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"YES"<<endl;
	}
}
	return 0;
}
