#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+5];
		long long b=0,c,d;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b=b+a[i];
		}
		c=n;
        if(b>0)
        {
        	if(b-c>0)
        	{
        		d=b-c;
        		cout<<d<<endl;
        		continue;
			}
			else if(b-c==0)
			{
				cout<<"0"<<endl;
				continue;
			}
			else if(b-c<0)
			{
				cout<<"1"<<endl;
				continue;
			}
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
	return 0;
}
