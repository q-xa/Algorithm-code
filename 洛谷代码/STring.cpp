#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x,a1;
	stack<string> s;
	cin>>x;
	for(long long i=0;i<x.size();i++)
	{
		if(s.size()==0)
		{
			a1=x[i];
			s.push(a1);
		}
		else if(s.size()!=0)
		{
			if(x[i]=='T')
			{
				if(s.top()=="S")
				{
					s.pop();
				}
				else 
				{
					a1=x[i];
					s.push(a1);
				}
			}
			else
			{
				a1=x[i];
			    s.push(a1);
			}
		}
	}
	cout<<s.size();
	return 0;
}
