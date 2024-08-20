#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		int k=0,l=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				k++;
			}
			else
			{
				l=max(l,k);
				k=0;
			}
			l=max(l,k);
		}
		cout<<l<<endl;
	}
	return 0;
}
