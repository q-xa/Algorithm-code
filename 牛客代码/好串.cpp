#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	stack<string> c;
	cin>>n;
	for(int i=0;i<n.size();i++)
	{
		if(c.size()==0)
		{
			if(n[i]=='a')
			{
				c.push("a");
			}
			else
			{
				cout<<"Bad";
				return 0;
			}
		}
		else
		{
			if(n[i]=='a')
			{
				c.push("a");
			}
			else
			{
				if(c.top()=="a")
				{
					c.pop();
				}
				else
				{
					c.push("b");
				}
			}
		}
	} 
	if(c.size()==0)
	{
		cout<<"Good";
	}
	else
	{
		cout<<"Bad";
	}
	return 0;
}
