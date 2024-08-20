#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long va,vb,vc,a,b,c,h1,h2;
		cin>>va>>vb>>vc;
		h1=va+vb+vc;
		if(h1%2!=0)
		{
			cout<<"No"<<endl;
			continue;
		}
		else
		{
			h2=h1/2;
			a=h2-va;
			b=h2-vb;
			c=h2-vc;
			if(a+b>c&&a+c>b&&b+c>a)
			{
				cout<<"Yes"<<endl;
				cout<<a<<" "<<b<<" "<<c<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
} 
