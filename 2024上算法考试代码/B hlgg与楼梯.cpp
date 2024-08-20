#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long a[n+19];
	a[1]=1;
	a[2]=2;
	a[3]=4;
	a[4]=8;
	for(int i=5;i<=n;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
	}
	cout<<a[n];
	return 0;
}
