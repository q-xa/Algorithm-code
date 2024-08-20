#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,l,q;
	scanf("%lld",&n);
	long long x[n+10];
	for(int i=1;i<=n;i++){
//		cin>>x[i];
		scanf("%lld",&x[i]);
	}
	scanf("%lld",&l);
	scanf("%lld",&q);
//	cin>>l>>q;
	long long a,b;
	while(q--){
		scanf("%lld %lld",&a,&b);
//		cin>>a>>b;
		if(a>b){
			long long c=a;
			a=b;
			b=c;
		}
		long long p,r,shu=0,mid;
		while(1){
			p=a;r=b;
			while(p<r){
				mid=(p+r)/2;
				if(x[mid]<(x[a]+l)) p=mid+1;
				else r=mid-1;
			}
			if(mid>a){
	            shu++;
				a=mid;			
			}
			if((x[a]<x[b])&&((x[a]+l)>=x[b])){
				shu++;
				break;
			}
			if(a>=b){
				break;
			}
		}
		printf("%lld\n",shu);
//		cout<<shu<<endl;
	}
	return 0;
}
