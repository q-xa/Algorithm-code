#include <bits/stdc++.h>
using namespace std;	
int n,m,he=0;
string a[1005];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			int x=1;
			while(1){
				if(i-x<0||i+x>=n||j-x<0||j+x>=m){
					break;
				}
				if(a[i][j]==a[i-x][j-x]&&a[i][j]==a[i-x][j+x]&&a[i][j]==a[i+x][j]){
					x++;
				}
				else{
					break;
				}
			}
			he=max(he,x);
		}
	}
	cout<<he-1;
	return 0;
}
