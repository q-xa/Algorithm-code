#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	while(n--)
	{
		long long a,b;
		cin>>a>>b;
		long long c[a+55];
		for(int i=0;i<a;i++)
		{
			cin>>c[i];
		}
		sort(c,c+a);
		long long d1=1,d2=1;
		for(int i=1;i<a;i++)
		{
			if(c[i]-c[i-1]<=b)
			{
				d2++;
			}
			else
			{
				d2=1;
			}
			if(d2>d1)
			{
				d1=d2;
			}
		}
		cout<<a-d1<<endl;
	}
	return 0;
}

