#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s[60];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		long long a=0,b=100000;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				a=0;
				for(int k=0;k<m;k++)
				{
					a=a+abs(s[i][k]-s[j][k]);
				}
				b=min(b,a);
			}
		}
		cout<<b<<endl;
	}
	return 0;
}

