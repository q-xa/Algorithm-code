#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d=0;
	cin>>a>>b;
	if(a>b)
	{
		c=a;
	}
	else
    {
    	c=b;
	}
	for(long long i=0;i<=c;i++)
	{
		if(a>0&&b>0)
		{
			if(a>b)
		{
			a=a-b;
			d++;
		}
		else if(b>a)
		{
			b=b-a;
			d++;
		}
		else if(a==b)
		{
			cout<<d;
			return 0;
		}
		}
		else
		{
			cout<<"-1";
			return 0;
		}
		
	}
	return 0;
}
