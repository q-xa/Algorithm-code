#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y,he=0,jishu=0,ans=0;
string s[100];
int a[]={-1,1,0,0};
int b[]={0,0,-1,1};
int bfs(int x,int y){
	if(he==ans-1){
		jishu=1;
	}
	for(int i=0;i<4;i++){
		int dx=x+a[i],dy=y+b[i];
		if(dx>=0&&dx<n&&dy>=0&&dy<m){
			if(s[dx][dy]=='.'){
				s[dx][dy]='#';
				he++;
				bfs(dx,dy);
				s[dx][dy]='.';
				he--;
			}
		}
	}
	return 0;
}
int main(){
	
	cin>>n>>m>>x>>y;
	
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='.'){
				ans++;
			}
		}
	}
	bfs(x-1,y-1);
	if(jishu==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
