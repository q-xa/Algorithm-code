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
		int a[n+3];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int c,d=0;
		if(a[0]==a[1]||a[0]==a[2])
		{
			c=a[0];
		}
		else
		{
			cout<<"1"<<endl;
			d=1;
		}
		for(int i=0;i<n;i++)
		{
			if(c!=a[i]&&d==0)
			{
				cout<<i+1<<endl;
				d=1;
			}
		}
	}
	return 0;
}
