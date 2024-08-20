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
		int a[n];
		if(n==2||n==3)
		{
			cout<<"-1"<<endl;
			continue;
		}
		if(n%2==0)
		{
			for(int i=1;i<n/2;i++)
		    {
		    	a[0]=2;
		    	a[i]=a[i-1]+2;
			}
	        a[n/2]=n-3;
	        a[(n/2)+1]=n-1;
	        int c=n-5;
	        for(int i=(n/2)+2;i<n;i++)
	        {
	        	a[i]=c;
	        	c=c-2;
			}
		}
		else
		{
			for(int i=1;i<(n+1)/2;i++)
		    {
		    	a[0]=1;
		    	a[i]=a[i-1]+2;
			}
	        a[(n+1)/2]=n-3;
	        a[(n+1)/2+1]=n-1;
	        int c=n-5;
	        for(int i=(n+1)/2+2;i<n;i++)
	        {
	        	a[i]=c;
	        	c=c-2;
			}	
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
