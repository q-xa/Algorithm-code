#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	long long a[100005];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-2;i++)
	{
		if(a[i]+a[i+1]>a[i+2])
		{
             c=1;
		}
	}
	if(c==1)
	cout<<"Yes";
	else 
	cout<<"No";
	return 0;
}
