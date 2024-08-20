#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
    stack<int>p;
    cin>>a>>b;
    p.push(b);
    while(b)
    {
    	if(b%2==0)
    	{
    		b=b/2;
    		p.push(b);
		}
		else if(b%10==1)
		{
			b=b/10;
			p.push(b);
		}
		else
		{
			cout<<"NO";
			return 0;
		}
        if(b<a)
		{
			cout<<"NO";
			return 0;
		}
		if(b==a)
		{
			break;
		}
	}
	cout<<"YES"<<endl;
	cout<<p.size()<<endl;
	while(p.size()) 
	{
		cout<<p.top()<<" ";
		p.pop();
	}
    return 0;
}

