#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+5;
struct tj
{
	long long zao;
	long long wan;
	long long ca;
};

bool cmp(tj a,tj b)
{
	return a.ca>b.ca;
 } 
tj a[N];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].zao;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i].wan;
		a[i].ca=a[i].zao-a[i].wan;
	}
	sort(a,a+n,cmp);
	long long b=0;
	for(int i=0;i<k;i++)
	{
		b=b+a[i].zao;
	}
	for(int i=k;i<n;i++)
	{
		b=b+a[i].wan;
	}
	cout<<b;
	return 0;
}
