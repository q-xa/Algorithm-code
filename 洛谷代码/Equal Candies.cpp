#include<bits/stdc++.h>
using namespace std;
const int N=1e5+4;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    		int n;
	cin>>n;
	long long a[N];
	long long b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<n;i++)
	{
		b=b+a[i]-a[0];
	}
	cout<<b<<endl;
	}
	return 0;
}

