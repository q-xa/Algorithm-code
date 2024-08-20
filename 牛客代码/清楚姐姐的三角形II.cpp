#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,c=1;
	cin>>a;
	int b[a];
	for(int i=1;i<=a;i++)
	{
		if(c==1)
		{
			cout<<"1 ";
		}
		else if(c==2)
		{
			cout<<"1 ";
	    }
	    else
	    {
	    	cout<<"2 ";
	    	c=0;
		}
		c++;
	}
	return 0;
}
