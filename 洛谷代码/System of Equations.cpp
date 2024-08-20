#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int i,j,s=0;
	for(i=0;i<=n+m;i++)
	{
		for(j=0;j<=n+m;j++)
		{
			if(pow(i,2)+j==n&&pow(j,2)+i==m)
			{
				s++;
			}
		}
	}
	cout<<s;
}
