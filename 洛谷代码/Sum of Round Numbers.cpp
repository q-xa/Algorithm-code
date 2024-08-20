#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[N];
		int n,j=0,b=1;
		cin>>n;
		while(n>0)
	    {
	    	int c;
	    	c=n%10;
	    	if(c!=0)
	    	{
	    		a[j]=c*b;
	    		j++;
			}
			n=n/10;
			b=b*10;
		}
		cout<<j<<endl;
		for(int i=0;i<j;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
