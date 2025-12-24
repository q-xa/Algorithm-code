#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
	int n,m=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=0;
		int o=1,u;
		u=i;
		while(u>0){
			int j;
			j=u%10;
//			cout<<j<<" ";
			if(j%2==0&&o%2!=0){
				k=1;
//				cout<<j<<" "<<o;
			}
			if(j%2!=0&&o%2==0){
				k=1;
//				cout<<j<<" "<<o;	
			}
			o=o+1;
//			cout<<o;
		    u=u/10;
//			cout<<u<<" ";
			
//			if(u==0){
//				break;
//			}	
		}
		if(k==0){
			m++;
		}
//		cout<<endl;
	}
	cout<<m;
	return 0;
}
