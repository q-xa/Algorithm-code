#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	while(n--)
	{
		long long a,b,d=1,e,f=0;
		cin>>a>>b;
		while(1)
		{
			f=(f*10+b)%a;
			e=f%a;
			if(e==0)
			{
				break;
			}
			else 
			d++;
		}
		c++;
		cout<<"Case "<<c<<": "<<d<<endl;
	}
	return 0;
 } 
