#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n=10000,m=0;
	for(int i=n;i<=99999;i++){
		int f1,f2,f3,f4,f5;
		f1=i/10000;
		f2=(i%10000)/1000;
		f3=(i%1000)/100;
		f4=(i%100)/10;
		f5=i%10;
		if(f1!=4&&f2!=4&&f3!=4&&f4!=4&&f5!=4){
			m++;
		}
	}
	cout<<m;
	return 0;
}
