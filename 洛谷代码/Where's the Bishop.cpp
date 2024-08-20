#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s[8];
		int a[8];
		for(int i=0;i<8;i++)
		{
			a[i]=0;
		}
		for(int i=0;i<8;i++)
		{
			cin>>s[i];
		}
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(s[i][j]=='#')
				{
					a[i]++;
				}
			}
		}
		for(int i=1;i<7;i++)
		{
			if(a[i-1]==2&&a[i+1]==2&&a[i]==1)
			{
				for(int j=0;j<8;j++)
				{
					if(s[i][j]=='#')
					{
						cout<<i+1<<" "<<j+1<<endl;
					}
				 } 
			}
		}
	 } 
	return 0;
}
