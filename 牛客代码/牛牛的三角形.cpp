#include<bits/stdc++.h>
using namespace std;
int a[150];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int f=j+1;f<n;f++)
			{
				if(a[i]+a[j]>a[f]&&a[i]+a[f]>a[j]&&a[j]+a[f]>a[i])
				{
					cout<<a[i]<<' '<<a[j]<<' '<<a[f];
					return 0;
				}
			}
		}
	}
	cout<<"No solution";
}

