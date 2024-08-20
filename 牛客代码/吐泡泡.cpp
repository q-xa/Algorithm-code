#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	char b[105];
	while(cin>>b)
	{
	stack<char> a;
    c=strlen(b);
    for(int i=0;i<c;i++)
    {
    	if(a.size()==0)
    	{
    		a.push(b[i]);
    	}
    	else
    	{
    		if(a.top()=='o')
    		{
    			if(b[i]=='o')
    			{
    				a.pop();
    				if(a.size()!=0)
    				{
    					if(a.top()=='O')
    					{
    						a.pop();
    					}
    				}
    				else
                    a.push('O');
    			}
    			else
    			{
    				a.push('O');
    			}
    		}
    		else if(a.top()=='O')
    		{
    			if(b[i]=='O')
    			{
    				a.pop();
    			}
    			else
    			a.push(b[i]);
    		}
    	}
    }
    stack<char> d;
    while(a.size())
    {
    	d.push(a.top());
    	a.pop();
    }
    while(d.size())
    {
    	cout<<d.top();
    	d.pop();
    }
    cout<<endl;
    }
	return 0;
}
