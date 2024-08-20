#include<bits/stdc++.h>
using namespace std;
int main(){
	double a=0;
	long long n=23333333;
//	cout<<n*n;
	for(int i=1;i<=n;i++){
		a=-i*1.0/n*i*log2(i*1.0/n)-((n-i)*1.0/n*(n-i))*log2((n-i)*1.0/n);
//	    cout<<i<<" "<<a<<endl;
		if(fabs(a-11625907.5798)<0.0001){
			cout<<i;
			break;
		}
	}
	return 0;
}
