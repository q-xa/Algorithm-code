#include<bits/stdc++.h>
using namespace std;
int a[205][205];
long long b;
long long d=0;
int n,m;
int tj(int x,int y)
{
	int e1=x,e2=x,e3=x,e4=x,f1=y,f2=y,f3=y,f4=y;
	long long h=0;
	while(1)
	{
		e1--;
		f1--;
		if(e1>=0&&f1>=0)
		{
			h=h+a[e1][f1];
		}
		else
		{
			break;
		}
	}
	while(1)
	{
		e2--;
		f2++;
		if(e2>=0&&f2<m)
		{
			h=h+a[e2][f2];
		}
		else
		{
			break;
		}
	}
	while(1)
	{
		e3++;
		f3--;
		if(e3<n&&f3>=0)
		{
			h=h+a[e3][f3];
		}
		else
		{
			break;
		}
	}
	while(1)
	{
		e4++;
		f4++;
		if(e4<n&&f4<m)
		{
			h=h+a[e4][f4];
		}
		else
		{
			break;
		}
	}
	b=h+a[x][y];
	d=max(b,d);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long long c=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		d=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				tj(i,j);
			}
		}
		cout<<d<<endl;
	}
	return 0;
}

