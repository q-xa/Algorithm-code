#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+534;
long long next[N+4];
long long n;
int main()
{
	cin>>n;
	while(n--)
	{
		long long a,b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
		{
			cin>>next[i];
		}
		sort(next,next+a);
		int da=0,k=0;
		if(a!=1)
		{
			for(int i=1;i<a;i++)
			{
				if(next[i]-next[i-1]<=b)
				{
					k++;
				}
				else
				{
				    da=max(da,k);
					k=0;
				}
				if(i==a-1)
				{
				    da=max(da,k);
					k=0;
				} 
			}
		}
		if(a!=1)
		{
			int c;
			c=a-da-1;
			cout<<c<<endl;
		}
		else
		cout<<"0"<<endl;
	}
	return 0;
}

