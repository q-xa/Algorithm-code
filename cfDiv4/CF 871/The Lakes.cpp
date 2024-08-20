#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x1,x2;
};
int BFS(int n,int m)
{
	int a[n+2][m+3],b[n+2][m+3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			b[i][j]=0; 
		}
	}
	queue<node>q;
	int y=0,da=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			y=0;
			if(a[i][j]!=0&&b[i][j]==0)
			{
				node d;
				d.x1=i;
				d.x2=j;
				q.push(d);b[i][j]=1;
				while(q.size()!=0)
				{
					node c=q.front(),f;
					y=y+a[c.x1][c.x2];
					q.pop();
					if(a[c.x1-1][c.x2]!=0&&c.x1-1>=0&&b[c.x1-1][c.x2]==0) 
					{
						f.x1=c.x1-1;
						f.x2=c.x2;
						q.push(f);
						b[c.x1-1][c.x2]=1;
					}
					if(a[c.x1+1][c.x2]!=0&&c.x1+1<n&&b[c.x1+1][c.x2]==0) 
					{
						f.x1=c.x1+1;
						f.x2=c.x2;
						q.push(f);
						b[c.x1+1][c.x2]=1;	
					}
					if(a[c.x1][c.x2-1]!=0&&c.x2-1>=0&&b[c.x1][c.x2-1]==0)
					{
						f.x1=c.x1;
						f.x2=c.x2-1;
						q.push(f);b[c.x1][c.x2-1]=1;
					}
					if(a[c.x1][c.x2+1]!=0&&c.x2+1<m&&b[c.x1][c.x2+1]==0)
					{
						f.x1=c.x1;
						f.x2=c.x2+1;
						q.push(f);	b[c.x1][c.x2+1]=1;
					}
				}
				da=max(y,da);
			}
		}
	}
	return da;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<BFS(n,m)<<endl;
	}
	return 0;
}
