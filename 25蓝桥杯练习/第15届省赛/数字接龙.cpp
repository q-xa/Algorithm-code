#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,q=0,m=10;
int a[20][20],b[20][20];
string p;
stack<string>s;
int xx[]={-1,-1,0,1,1,1,0,-1};
int yy[]={0,1,1,1,0,-1,-1,-1};
void dfs(int x,int y,string p){
	if(x==n-1&&y==n-1){
		int u=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(b[i][j]==0){
					u=1;
				}
			}
		}
		if(u==0){
			q++;
//			cout<<p<<endl;
			s.push(p);
		}
		return;
	}
	for(int i=0;i<8;i++){
//		cout<<i<<":"<<endl;
		if(x+xx[i]>=0&&x+xx[i]<n&&y+yy[i]>=0&&y+yy[i]<n){
			if(b[x+xx[i]][y+yy[i]]==0&&a[x+xx[i]][y+yy[i]]==((a[x][y]+1)%k)){
				char t;
				t=i+'0';				
				if(i==7||i==1||i==3||i==5){
					if(abs(a[x+xx[(i+1)%8]][y+yy[(i+1)%8]]-a[x+xx[(i-1)%8]][y+yy[(i-1)%8]])==1){
						if(abs(b[x+xx[(i+1)%8]][y+yy[(i+1)%8]]-b[x+xx[(i-1)%8]][y+yy[(i-1)%8]])!=1){
							b[x+xx[i]][y+yy[i]]=m;m++;
							dfs(x+xx[i],y+yy[i],p+t);
							b[x+xx[i]][y+yy[i]]=0;m--;
						}
					}
					else{
						b[x+xx[i]][y+yy[i]]=m;m++;
						dfs(x+xx[i],y+yy[i],p+t);
						b[x+xx[i]][y+yy[i]]=0;m--;
					}
				}
				else{
					b[x+xx[i]][y+yy[i]]=m;m++;
					dfs(x+xx[i],y+yy[i],p+t);
					b[x+xx[i]][y+yy[i]]=0;m--;
				}
			}
		}
	}
}
signed main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=0;
		}
	}
//	cout<<"1:"<<endl;
	b[0][0]=m;m++;
	dfs(0,0,p);
	if(q!=0){
		string v1,v2;
		v1=s.top();
		s.pop();
		while(s.size()>0){
			v2=s.top();
			s.pop();
			if(v1>v2){
				v1=v2;
			}
		}
		cout<<v1;
	}
	else{
		cout<<-1;
	}
	return 0;
}
