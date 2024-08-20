#include<bits/stdc++.h>
using namespace std;
long long a[13],b[14],c[13],d[13];
long long t,n,m,shu,js=0;
int dfs(int i,int s){
//	cout<<shu<<" ";
	if(shu==n-1){
		js=1;
	}
	for(int j=1;j<=n;j++){
		if(d[j]!=1){
			if(m<=(a[j]+b[j])){
				int o=m;
				if(m<a[j]){
					m=a[j]+c[j];
				}
				else{
					m+=c[j];
				}
				shu++;
				d[j]=1;
				dfs(j,m);
				shu--;
				d[j]=0;
				m=o;
			}
		}
	}
	return 0;
}
int main(){
    cin>>t;
	while(t--){
		cin>>n;
		js=0;
		for(int i=1;i<=n;i++){
			cin>>a[i]>>b[i]>>c[i];
			d[i]=0;
		}
		for(int i=1;i<=n;i++){
			shu=0;
			m=a[i]+c[i];
			d[i]=1;
			dfs(i,m);
			d[i]=0;
		}
		if(js==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
