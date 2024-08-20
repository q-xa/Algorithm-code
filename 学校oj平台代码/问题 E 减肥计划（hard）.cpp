#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<long long> w;
	long long n,k,s,d=0,g=1;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		w.push(s);
    }
    for(int i=1;i<=n;i++)
    {
    	long long c1,c2,c3=0;
    	if(d==0)
    	{
    	 	c1=w.front();
    	    w.pop();
		}
		else
		{
			c1=d;
		}
    	for(int j=2;j<=n;j++)
    	{
    		c2=w.front();
    	    w.pop();
    	    if(c1>=c2)
    	    { 
    		    w.push(c2);
    		    c3++;
    		    if(c3>=k)
    		    {
    		    	cout<<g<<endl;
    		    	return 0;
				}
				d=0;
		    }
		    else
		    {
		    	d=c2;
		    	g=j;
		    	break;
			}
		}
	}
	return 0;
}
