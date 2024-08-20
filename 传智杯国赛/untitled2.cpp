#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,q,d=0;
	cin>>n;
	long long a[n+19],b[n+19],c[n+19];
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		c[i]=0;
	}
	c[0]=0;
	for(int i=1;i<=n;i++){
		scanf("%lld",&b[i]);
		if(b[i]==a[i]){
			c[i]=c[i-1]+1;
			d=1;
//			cout<<c[i]<<' ';
		}
		else{
			if(d==1){
				d=0;
				c[i]=c[i-1]+1;
			}
			else{
				c[i]=c[i-1];
			}
//			cout<<c[i]<<' ';
		}
	}
	cin>>q;
	long long l,r;
	for(int i=0;i<q;i++){
		scanf("%lld%lld",&l,&r);
		if(c[l]==c[r]){
			if(l==r){
				if(a[l]==b[l]){
					printf("NO\n");
				}
				else{
					printf("YES\n");
				}
			}
			else{
				printf("YES\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
