#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long p=1,q=0;
		while(1)
		{
			if(p>=n)
			{
				cout<<q<<endl;
				break;
			}
			p=p+p;
			q++;
		}
	}
	return 0;
}
