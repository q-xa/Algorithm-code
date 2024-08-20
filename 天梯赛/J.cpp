#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	long long x[10010];
	long long f=0,he=-1,su=1,k=0;
	for(long long i=a;i<=b;i++){
		k=0;
		long long p=i;
		while(p>=10){
			long long l=p;
			while(l>0){
				su=su*(l%10);
				l=l/10;
			}
//			cout<<su<<endl;
			p=su;
//			cout<<i<<" "<<p<<endl;
			su=1;
			k++;
		}
		if(k>he){
			he=k;
			f=0;
			x[f]=i;
		}
		else if(k==he){
			f++;
			x[f]=i;
		}
	}
	cout<<he<<endl;
	for(int i=0;i<f;i++){
		cout<<x[i]<<" ";
	}
	cout<<x[f];
//	cout<<endl<<f;
	return 0;
}
