#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a=1,s=1;
	cin>>n>>m;
	while(m--)
	{
		int a1,a2;
		cin>>a1>>a2;
		if(a1==1)
		{
			swap(s,a1);
		}
		if(a==a1)
		{
			swap(a,a2);
		}
		if(a==n)
		{
			cout<<"Yes";
			return 0;
		}
		if(s==a1)
		{
			swap(s,a2);
		}
		if(s==n)
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
