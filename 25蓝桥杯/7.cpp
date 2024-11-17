#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int k=0;
	while(n>0){
		int j;
		j=n%10;
		n=n/10;
		if(j>k){
			k=j;
		}
	}
	cout<<k;
	return 0;
}
