#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,k,n,T,a,b,c=0,d=0,e,f=0,j;
	cin>>x>>y>>k>>n>>T;
	e=x;j=n;
	for(int i=1;i<=j;i++)
	{
		a=x*n;
		d=d+a;
		f=f+n;
		b=(f/k)*y;
		x=e+b;
		n--;
		if(d>=T)
		{
			c=i;
			break;
		}
	}
	if(c==0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<c;
	}
	return 0;
}
