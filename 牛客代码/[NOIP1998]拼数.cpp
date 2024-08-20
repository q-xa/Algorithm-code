#include<bits/stdc++.h>
using namespace std;
bool cmp(string b,string c)
{
	return b+c>c+b;
}
int main()
{
	int n;
	cin>>n;
	string a[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
