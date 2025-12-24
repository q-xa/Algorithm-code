#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int n=0,m=0;
	for(int i=1;i<50;i++){
		for(int j=i+1;j<=50;j++){
			n++;
		}
	}
	for(int i=1;i<43;i++){
		for(int j=i+1;j<=43;j++){
			m++;
		}
	}
	int k=43*7;
	cout<<k+m;
	return 0;
}
