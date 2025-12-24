#include<bits/stdc++.h>
using namespace std;
int main(){
	int v,n,m;
	cin>>v>>n>>m;
	int k1,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0;
	if(n>m){
		k1=n;
		n=m;
		m=k1;
	}
	k1=1;
	int y=0;
	for(int i=1;i<=m;i++){
		if(y==0){
			
			if(i==n){
				k4=k1;
				k7=k6;
			}
			if(i==m){
				k5=k1;
				k8=k6;
			}
			if(k1==v){
				k2=v;
				y=1;
				k6++;
			}
			k1++;
		}
		else{
			
			if(i==n){
				k4=k2;
				k7=k6;
			}
			if(i==m){
				k5=k2;
				k8=k6;
			}
			if(k2==1){
				k1=1;
				y=0;
				k6++;
			}
			k2--;
		}
	}
//	cout<<k4<<" "<<k5<<" "<<k7<<" "<<k8<<endl;
	cout<<abs(k5-k4)+abs(k8-k7);
	return 0;
}
