#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	long long a[n+2];
	for(int i=0;i<n;i++){
		//TODO
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[k-1]<<" ";
	return 0;
}
