#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,he=0,h=100050;
    cin>>n>>m;
    for(int i=0;i<m;i++){
    	long long k;
		cin>>k;
		h=min(h,k);
		he+=k;
	}
	if(he/n>=m){
		cout<<n;
	}
	else if((he/n)==(m-1)){
		cout<<he%n;
	}
	else{
		cout<<h;
	}
	return 0;
}
