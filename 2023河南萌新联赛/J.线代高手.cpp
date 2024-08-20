#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[1000],b[1000],c[3000][3000];
int main(){
	int n,m;
	cin>>n>>m;
	int x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	cin>>x;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			c[i][j]=a[i]*b[j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			c[i][j]=c[i-1][j]+c[i][j-1]+c[i][j]-c[i-1][j-1];
		}
	}
	int maxn=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=i;k<=n;k++){
				for(int l=j;l<=m;l++){
					int t=c[k][l]-c[i-1][l]-c[k][j-1]+c[i-1][j-1];
					if(t<=x){
						maxn=max(maxn,(abs(k-i)+1)*(abs(l-j)+1));
					}
				}
			}
		}
	}
	cout<<maxn<<endl;
	return 0;
}