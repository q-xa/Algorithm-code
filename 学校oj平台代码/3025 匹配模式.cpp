#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	cin>>s;
	int l=0,r=0,q=0;
	for(int i=0;i<t;i++)
	{
		if(s[i]==')')
		{
			if(l==0)
			{
				r++;
			}
			else
			{
				l--;
			}
		}
		else
		{
			if(r)
            {
            	q=q+(r+1)/2;
            	l=(r%2)+1;
				r=0;
			}
			else
			{
				l++;
			}	
		}
	}
	q=q+l/2+r/2;
	cout<<q<<endl;
	return 0;
}
