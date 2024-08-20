#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	long long m;
	int a[110];
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		m=m-a[i];
		c++;
		if(m<=0)
		{
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}
