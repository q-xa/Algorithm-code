#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];

		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			int u;
		    string s;
			cin>>u>>s;
			for(int i=0;i<u;i++)
			{
				if(s[i]=='U')
				{
					a[j]--;
				}
				else
				{
					a[j]++;
				}
				if(a[j]==10)
				{
					a[j]=0;
				}
				if(a[j]==-1)
				{
					a[j]=9;
				}
			}
		 } 
		 for(int i=1;i<=n;i++)
		 {
		 	cout<<a[i]<<" ";
	     }
	     cout<<endl;
	}
	return 0;
}
