#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,n,c;
	while(cin>>a>>b>>n)
	{
		if(b>=a)
		{
		c=n*b; 
		cout<<c<<endl;
	    }
	    else
	    {
		if(n%2==0)
		{
			c=((n/2)-1)*(b+a)+2*b; 
		}
		else
		{
			c=((n-1)/2)*(b+a)+b;
		}
		cout<<c<<endl;	
		}
	}
	return 0;
}
