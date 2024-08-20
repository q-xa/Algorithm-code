#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;long long a[n+3],b[n+4];
	b[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			if(i-a[i]>0)
			{
				b[i-a[i]]++;
				b[i]--;
			}
			else
			{
				b[0]++;
				b[i]--;
			}
			if(i+a[i]>n)
			{
				b[i+1]++;
			}
			else
			{
				b[i+1]++;
				b[i+a[i]+1]--;
			}
		}
//		cout<<b[i]<<" ";
	}
//	cout<<endl;
	long long d=0;
	for(int i=1;i<=n;i++)
	{
		b[i]=b[i]+b[i-1];
//		cout<<b[i]<<" ";
		if(b[i]>0)
		{
			d++;
		}
	}
//	cout<<endl;
	cout<<d;
	return 0;
}
