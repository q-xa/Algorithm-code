#include<bits/stdc++.h>
using namespace std;
long long t,n;

int main()
{
    cin>>t;
	while(t--)
	{
		long long k1,k2=0;
		cin>>n;
		string s[n+2];
        long long a[15][15];
        for(int i=0;i<15;i++)
        {
        	for(int j=0;j<15;j++)
        	{
        		a[i][j]=-1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			int l1,l2;
			l1=s[i][0]-'a';
			l2=s[i][1]-'a';
			a[abs(l1)][abs(l2)]++;
		}
		for(int i=0;i<15;i++)
        {
        	k1=0;
        	for(int j=0;j<15;j++)
        	{
        		if(a[i][j]!=-1&&k1==0)
        		{
        			k1=1;
        			k1=k1*a[i][j];
				}
				else if(a[i][j]!=-1&&k1==1)
				{
					k1=k1*a[i][j];
				}
			}
			k2=k2+k1;
		}
		cout<<k2<<endl;
	 } 
	return 0;
}

