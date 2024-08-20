#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,j1=0,j2=0,o1=0,o2=0;
    	cin>>n;
		int a[n+3];
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];
    		if(i%2==0)
    		{
    			if(a[i]%2==0)
    			{
    				j1++;
				}
				else{
					j2++;
				}
			}
			else
			{
				if(a[i]%2==0)
				{
					o1++;
				}
				else
				{
					o2++;
				}
			}
		}
		if(j1+o1==n||j1+o2==n)
		{
			cout<<"YES"<<endl;
		}
		else if(j2+o1==n||j2+o2==n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

