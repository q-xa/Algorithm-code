#include<bits/stdc++.h>
using namespace std;
long long n,k;
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};
int a[110][110];
int c=0;
string s[110];
void dfs(int x,int y){
	queue<int>q1,q2;
	q1.push(x);
	q2.push(y);
	while(!q1.empty()){
		int x1=q1.front();
		int y1=q2.front();
		q1.pop(),q2.pop();
		for(int i=0;i<4;i++){
			int x2=x1+xx[i],y2=y1+yy[i];
			if(x2>=0&&x2<n&&y2>=0&&y2<k&&s[x2][y2]=='.'&&a[x2][y2]==0){
				q1.push(x2),q2.push(y2);
				a[x2][y2]=1;
				if(x2==n-1&&y2==k-1){
					return;
				}
			}
		}
	}
}
int main(){
	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			a[i][j]=0;
		}
	}
	dfs(0,0);
	if(a[n-1][k-1]==1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
