#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,m,k;
int a[N],b[N],d[N];
int finda(int x){
	if(a[x]!=x){
		a[x]=finda(a[x]);
	}
	return a[x];
}
int findb(int x){
	if(b[x]!=x){
		b[x]=findb(b[x]);
	}
	return b[x];
}
int main(){
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		a[i]=i;
		b[i]=i;
		d[i]=1;
	}
	for(int i=1;i<=m;i++){
		int c1,c2;
		cin>>c1>>c2;
		if(finda(c1)!=finda(c2)){
			a[finda(c1)]=finda(c2);
		}
	}
	cin>>k;
	for(int i=1;i<=k;i++){
		int c1,c2;
		cin>>c1>>c2;
		if(finda(c1)==finda(c2)){
			if(findb(c1)!=findb(c2)){
				int f=d[findb(c1)]+d[findb(c2)];
				d[findb(c1)]=f;
				d[findb(c2)]=f;
				b[findb(c1)]=findb(c2);
			}
		}
	}
	int da=d[findb(1)],xiao=d[findb(1)];
	for(int i=1;i<=n;i++){
		da=max(da,d[findb(i)]);
		xiao=min(xiao,d[findb(i)]);
	}
	cout<<da<<" "<<xiao;
	return 0;
}
