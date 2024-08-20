#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b=0,i;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			b++;
		}
	}
	cout<<b;
	return 0;
}
