#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		string a[t+3];
		int x1,x2,x3,x4,y1,y2,y3,y4,c=0;
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<t;i++)
		{
			for(int j=0;j<t;j++)
			{
				if(a[i][j]=='*'&&c==0)
				{
					x1=i;
					y1=j;
					c=1;
				}
				else if(a[i][j]=='*'&&c!=0)
				{
					x2=i;
					y2=j;
				}
			}
		}
		if(x1==x2)
		{
			if(x1+1>=t)
			{
				x3=x1-1;
				x4=x3;
				y3=y1;
				y4=y2;
			}
			else
			{
				x3=x1+1;
				x4=x3;
				y3=y1;
				y4=y2;
			}
		}
		else if(y1==y2)
		{
			if(y1+1>=t)
			{
				y3=y1-1;
				y4=y3;
				x3=x1;
				x4=x2;
			}
			else 
			{
				y3=y1+1;
				y4=y3;
				x3=x1;
				x4=x2;
			}
		}
		else
		{
			x3=x1;
			y3=y2;
			x4=x2;
			y4=y1;
		}
		a[x3][y3]='*';
		a[x4][y4]='*';
		for(int i=0;i<t;i++)
		{
			cout<<a[i];
			cout<<endl;
		}
	}
	return 0;
}
