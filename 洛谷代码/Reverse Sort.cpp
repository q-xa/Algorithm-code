#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m,b=0;
		string a1;
		cin>>m;
		cin>>a1;
		for(int i=0;i<a1.size();i++)
		{
			if(a1[i]=='0')
			{
				b++;
			}
		}
		int a2[1005];
		int c=0;
		for(int i=0;i<a1.size();i++)
		{
			if(i<b)
			{
			    if(a1[i]=='1')
			{
				c++;
				a2[c]=i;
			}	
			}
			else
			{
				if(a1[i]=='0')
			{
				c++;
				a2[c]=i;
			}
		    } 
		}
		if(c==0)
		{
			cout<<"0";
		}
		else
		{
			cout<<"1"<<endl;
			cout<<c<<" ";
			for(int i=1;i<=c;i++)
			{
				cout<<a2[i]+1<<" ";
			}
		}
		cout<<endl;
	}
	return 0; 
}
