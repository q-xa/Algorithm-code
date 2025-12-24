#include<bits/stdc++.h>
using namespace std;
#define int long long 
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
struct jgt{
	int a,b,c;
};
signed main(){
	int n,s=-1;
	cin>>n;
	int a[n+10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	jgt d;	
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				int f;
				f=((a[i]*a[j]*a[k])*(lcm(a[i],lcm(a[k],a[j])))/(lcm(a[i],a[j])*lcm(a[i],a[k])*lcm(a[j],a[k])));
//		        cout<<f<<" "<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
				if(f>s){
					s=f;
					if(a[i]>a[j]&&a[i]>a[k]){
						d.a=a[i];
						if(a[k]>a[j]){
							d.b=a[k];
							d.c=a[j];
						}
						else{
							d.c=a[k];
							d.b=a[j];
						}
					}
					if(a[k]>a[i]&&a[k]>a[j]){
						d.a=a[k];
						if(a[i]>a[j]){
							d.b=a[i];
							d.c=a[j];
						}
						else{
							d.c=a[i];
							d.b=a[j];
						}
					}
					if(a[j]>a[i]&&a[j]>a[k]){
						d.a=a[j];
						if(a[k]>a[i]){
							d.b=a[k];
							d.c=a[i];
						}
						else{
							d.c=a[k];
							d.b=a[i];
						}
					}
				}
			}
		}
	}
	cout<<d.c<<" "<<d.b<<" "<<d.a;
	return 0;
}
