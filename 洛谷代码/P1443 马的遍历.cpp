#include<bits/stdc++.h>
using namespace std;
bool vis[410][410];
int n,m,x,y;
int a[410][410];
int dx[8]={2,1,1,2,-1,-2,-2,-1};
int dy[8]={1,2,-2,-1,2,1,-1,-2};
queue<int> qx,qy,qstep;
void bfs()
{
	int x,y,step;
	while(qx.empty()==0)
	{
		x=qx.front();
		y=qy.front();
		step=qstep.front();
		a[x][y]=step;
		qx.pop();qy.pop();qstep.pop();
		for(int i=0;i<8;i++)
		{
			if(x+dx[i]>=1&&x+dx[i]<=n&&y+dy[i]>=1&&y+dy[i]<=m&&vis[x+dx[i]][y+dy[i]]==0)
			{
				vis[x+dx[i]][y+dy[i]]=1;
				qx.push(x+dx[i]);
				qy.push(y+dy[i]);
				qstep.push(step+1);
			}
		}
	}
}
int main()
{
	cin>>n>>m>>x>>y;
	qx.push(x);
	qy.push(y);
	qstep.push(0);
	vis[x][y]=1;
	bfs();
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=m;j++)
	{
		if(!vis[i][j])
		cout<<"-1    ";
		else
		{
			cout<<a[i][j];
			cout<<"    ";
		}
	}
	cout<<endl;
    }
	return 0;
}
