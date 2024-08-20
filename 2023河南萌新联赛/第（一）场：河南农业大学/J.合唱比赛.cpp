#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+9];
	long long he=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		he=he+a[i];
	}
	sort(a,a+n);
	double l,r;
	l=(he-a[n-1])*(1.0)/(n-1)*(1.0);
	r=(he-a[0])*(1.0)/(n-1)*(1.0);
	printf("%.6f %.6f",l,r);
	return 0;
}
