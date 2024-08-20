#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main(){
	int n;
	cin>>n;
	double a[n+10];
	double he=0;
	for(int i=1;i<=n;i++){
		mp[i]=0;
		cin>>a[i];
	}
	while(1){
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0){
			break;
		}
		mp[x]+=y;
		he+=a[x]*y;
	}
	for(int i=1;i<=n;i++){
		cout<<mp[i]<<endl;
	}
	printf("%0.2lf",he);
	return 0;
}
