#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+6];
	long long sum,b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	sum=a[0];
	for(int i=1;i<=n;i++)
	{
		if(sum<=a[i])
		{
			b++;
			sum=sum+a[i];
		}
//	    cout<<sum<<endl;
	}
	cout<<b;
	return 0;
}
