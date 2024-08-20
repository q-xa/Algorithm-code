#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<char> s;
    string a;
    cin>>a;
    int m=a.size();
    for(int i=0;i<m;i++)
    {
  	if(s.empty()==1)
  	{
            if(a[i]==')')
            {
    		cout<<"NO";
    		return 0;
   	        }
  	}
  	if(a[i]=='(')
  	{
            s.push('(');
        }
        else if(a[i]==')')
        {
            s.pop();
  	}
    }
    if(s.empty()==0)
    {
  	cout<<"NO";
    }
    else 
    {
  	cout<<"YES";
    }
    return 0;
}
