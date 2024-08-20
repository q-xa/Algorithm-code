#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int s[n+19][n+10];
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		s[i][0]=k;
		for(int j=1;j<=k;j++){
			cin>>s[i][j];
		}
	}	
	int l;
	cin>>l;
	for(int i=0;i<l;i++){
		int a,b,he=0;
		cin>>a>>b;
		for(int j=0;j<n;j++){
			int x1=0,x2=0,x3;
			x3=s[j][0];
//			cout<<x3<<" ";
			for(int p=1;p<=x3;p++){
//				cout<<s[j][p]<<" ";
				if(s[j][p]==a){
					x1=1;
				}
				if(s[j][p]==b){
					x2=1;
				}
			}
//			cout<<endl;
			if(x1==1&&x2==1){
				he++;
//				cout<<"1 "<<s[j][0]<<endl;
			}
		}
		cout<<he<<endl;
	}
	return 0;
}
