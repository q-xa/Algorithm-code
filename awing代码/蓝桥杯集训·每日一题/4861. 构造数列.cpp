#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[100];
		int c=1,i=0,b;
		while(n>0)
		{
			b==n%10;
			n=n/10;
			if(b!=0)
			{
				a[i]=b*c;
				i++;
			}
		    c=c*10;
		}
		int d;
		d=i+1;
		cout<<d<<endl;
		for(int e=d-1;e>=0;e--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
