#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,w=1,z=0,a=0,b=2;
		cin>>n;
		for(int i=2;i<=n;i=i+a)
		{
			if(b%2==0)
			{
				if(n>=i)
				{
			    z=z+i;
				n=n-i;}
				else
				{
					z=z+n;
					break;
				}
				if(n>i+1)
				{
				z=z+i+1;
				n=n-(i+1);}
				else
				{
					z=z+n;
					break;
				}
				b++;
			}
			else
			{
				if(n>=i)
				{
				w=w+i;
				n=n-i;}
				else
				{
					w=w+n;
					break;
				}
				if(n>i+1)
				{
				w=w+i+1;
				n=n-(i+1);}
				else
				{
					w=w+n;
					break;
				}
				b++;
			}
			a=a+2;
		}
		cout<<w<<" "<<z<<endl;
	}
	return 0;
 } 
