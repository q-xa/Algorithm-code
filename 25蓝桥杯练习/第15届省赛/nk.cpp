#include<bits/stdc++.h>
using namespace std;
#define int long long 
map<int,int>mp;
int p[10000000];
int a[100000000];
int n,m,k=0;
int find(int x){
	if(x!=p[x]){
		p[x]=find(p[x]);
	}
	return p[x];
}
void dfs(int x){
	if(m==a[x]){
		k=1;
		cout<<"Yes";
		return;
	}
	else{
		if(p[x]==0){
			p[x]=1;
			dfs(a[x]);
		}
		
	}
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(m);
	if(k==0){
		cout<<"No";
	}
	return 0;
}
