#include<bits/stdc++.h>
using namespace std;
const long long N=1e6+2;
int main()
{
	long long n;
	cin>>n;
	long long a=n,b=0;
	long long c[N];
	while(a)
	{
		c[b]=a%2;
		a=a/2;
		b++;
	}
	long long e;
	e=log2(n)+1;
	long long k=0,r=b;
	b=b-2;
	while(k<b)
	{
		if(c[k]==0&&c[b]==1)
		{
			c[k]=1;
			c[b]=0;
			e--;
			if(e==0)
			{
				break;
			}
		}
		if(c[k]==1)
		{
			k++;
		}
		if(c[b]==0)
		{
			b--;
		}
	}
	r=r-1;
	long long he=0;
	while(r>=0)
	{
		he=he+c[r]*pow(2,r);
		r--;
	}
	cout<<n-he;
	return 0;
}
