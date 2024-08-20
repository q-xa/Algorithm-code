#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[150],t=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			t++;
		}
	}
	if(t==1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<i+1;
				break;
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				cout<<i+1;
				break;
			}
        }
	}
	return 0;
}
