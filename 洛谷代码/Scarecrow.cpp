#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,c=0;
	cin>>t;
	while(t--)
	{
		int n,b=0;
		string a;
		cin>>n;
		cin>>a;
		for(int i=0;i<=a.size();i++)
		{
			if(a[i]=='#')
			{
				continue;
			}
			else if(a[i]=='.')
			{
     		    ++b;
				i=i+2;
			}
		}
		c++;
		cout<<"Case "<<c;
		cout<<": "<<b<<endl; 
	}
	return 0;
}
