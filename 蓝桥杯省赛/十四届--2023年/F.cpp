#include<bits/stdc++.h>
using namespace std;
long long t,n,m,shu,u;
string a[60];
long long b[60][60],d[60][60];
int xx[]={1,-1,1,-1,0,0,1,-1};
int yy[]={-1,1,1,-1,1,-1,0,0};
struct s{
    int x;
	int y;
};
int dfs(int x,int y){
	if((x+1)>=m||(x-1)<0||(y+1)>=n||(y-1)<0){
		u=1;
	}
	b[x][y]=1;
	for(int i=0;i<9;i++){
		if(x+xx[i]<m&&x+xx[i]>=0&&y+yy[i]<n&&y+yy[i]>=0&&b[x+xx[i]][y+yy[i]]==0){
			int x1=x,y1=y;
			dfs(x+xx[i],y+yy[i]);
			x=x1;y=y1;
			b[x][y]=0;
		}
	}
	return 0;
}
void bfs(){
	queue<s>p;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(b[i][j]==0&&a[i][j]=='1'){
				queue<s>q;
				s c;
				c.x=i;c.y=j;
				q.push(c);
				p.push(c);
				while(q.size()!=0){
					c=q.front();
					q.pop();
					b[c.x][c.y]=1;
					if((c.x+1)<m&&b[c.x+1][c.y]==0&&a[c.x+1][c.y]=='1'){
						s v;
						v.x=c.x+1;
						v.y=c.y;
						q.push(v);
					}
					if((c.x-1)>=0&&b[c.x-1][c.y]==0&&a[c.x-1][c.y]=='1'){
						s v;
						v.x=c.x-1;
						v.y=c.y;
						q.push(v);
					}
					if((c.y+1)<n&&b[c.x][c.y+1]==0&&a[c.x][c.y+1]=='1'){
						s v;
						v.x=c.x;
						v.y=c.y+1;
						q.push(v);
					}
					if((c.y-1)>=0&&b[c.x][c.y-1]==0&&a[c.x][c.y-1]=='1'){
						s v;
						v.x=c.x;
						v.y=c.y-1;
						q.push(v);
					}
				}
				shu++;
			}
		}
		
	}	
	while(p.size()!=0){
	    u=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				b[i][j]=d[i][j];
			}
		}
//		queue<s>q;
		s c;
		c=p.front();
		p.pop();
		dfs(c.x,c.y);
//		q.push(c);
//		while(q.size()!=0){
//			c=q.front();
//			q.pop();
//			b[c.x][c.y]=1;
//			if((c.x+1)>=m||(c.x-1)<0||(c.y+1)>=n||(c.y-1)<0){
//				y=1;
//				break;
//			}
//			if((c.x+1)<m&&b[c.x+1][c.y]==0&&a[c.x+1][c.y]=='0'){
//				s v;
//				v.x=c.x+1;
//				v.y=c.y;
//				q.push(v);
//			}
//			if((c.x+1)<m&&(c.y+1)<n&&b[c.x+1][c.y+1]==0&&a[c.x+1][c.y+1]=='0'){
//				s v;
//				v.x=c.x+1;
//				v.y=c.y+1;
//				q.push(v);
//			}
//			if((c.x+1)<m&&(c.y-1)>=0&&b[c.x+1][c.y-1]==0&&a[c.x+1][c.y-1]=='0'){
//				s v;
//				v.x=c.x+1;
//				v.y=c.y-1;
//				q.push(v);
//			}
//			if((c.x-1)>=0&&b[c.x-1][c.y]==0&&a[c.x-1][c.y]=='0'){
//				s v;
//				v.x=c.x-1;
//				v.y=c.y;
//				q.push(v);
//			}
//			if((c.x-1)>=0&&(c.y+1)<n&&b[c.x-1][c.y+1]==0&&a[c.x-1][c.y+1]=='0'){
//				s v;
//				v.x=c.x-1;
//				v.y=c.y+1;
//				q.push(v);
//			}
//			if((c.x-1)>=0&&(c.y-1)>=0&&b[c.x-1][c.y-1]==0&&a[c.x-1][c.y-1]=='0'){
//				s v;
//				v.x=c.x-1;
//				v.y=c.y-1;
//				q.push(v);
//			}
//			if((c.y+1)<n&&b[c.x][c.y+1]==0&&a[c.x][c.y+1]=='0'){
//				s v;
//				v.x=c.x;
//				v.y=c.y+1;
//				q.push(v);
//			}
//			if((c.y-1)>=0&&b[c.x][c.y-1]==0&&a[c.x][c.y-1]=='0'){
//				s v;
//				v.x=c.x;
//				v.y=c.y-1;
//				q.push(v);
//			}
//		}
		if(u==0){
			shu--;
		}
		
	}

}
int main(){
	cin>>t;
	while(t--){
		shu=0;
		cin>>m>>n;
		for(int i=0;i<m;i++){
			cin>>a[i];
			for(int j=0;j<n;j++){
				b[i][j]=0;
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				d[i][j]=a[i][j]-'0';
			}
		}
		bfs();
		cout<<shu<<endl;
	}
	return 0;
}
