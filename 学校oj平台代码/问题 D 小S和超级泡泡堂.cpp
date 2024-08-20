#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,b1,b2;
	cin>>n>>m;
	string a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='@')
			{
				b1=i;
				b2=j;
			}
		}
	}
	long long e=0,n1,n2,n3,n4;
	n1=n;n2=0;n3=n;n4=0;
	for(int i=b1;i<n1;i++)
	{
		
		for(int j=b2;j<m;j++)
		{
			if(a[i][b2]=='#')
			{
				n1=i+1;
			}
			if(a[i][j]=='#')
			{
				break;
			}
			else if(a[i][j]=='!')
			{
				a[i][j]='.';
				e++;
			}
		}
	}
	for(int i=b1;i>=n2;i--)
	{
		for(int j=b2;j<m;j++)
		{
			if(a[i][b2]=='#')
			{
				n2=i-1;
			}
			if(a[i][j]=='#')
			{
				break;
			}
			else if(a[i][j]=='!')
			{
				a[i][j]='.';
				e++;
			}
		}
	}
	for(int i=b1;i<n3;i++)
	{
		for(int j=b2;j>=0;j--)
		{
			if(a[i][b2]=='#')
			{
				n3=i+1;
			}
			if(a[i][j]=='#')
			{
				break;
			}
			else if(a[i][j]=='!')
			{
				a[i][j]='.';
				e++;
			}
		}
	}
	for(int i=b1;i>=n4;i--)
	{
		for(int j=b2;j>=0;j--)
		{
			if(a[i][b2]=='#')
			{
				n4=i-1;
			}
			if(a[i][j]=='#')
			{
				break;
			}
			else if(a[i][j]=='!')
			{
				a[i][j]='.';
				e++;
			}
		}
	}
    cout<<e;
	return 0;
}
