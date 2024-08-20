#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    long long a[n+6];
    long long b,c;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	sort(a,a+n);
	b=a[n-1];
	while(1)
	{
		c=0;
		for(int i=n-1;i>=0;i--)
		{
			if(b<a[i])
			c=c+a[i]/b;
			else
			break;
			if(c>=m)
			{
				cout<<b;
				return 0;
			}
		}
		b=b+2;
		if(b==0)
		{
			break;
		}
	}
	cout<<"-1";
    return 0;
}

