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
		int a,b,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			if(a>b)
			{
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
