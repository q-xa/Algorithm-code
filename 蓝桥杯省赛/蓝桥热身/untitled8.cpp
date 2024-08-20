#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=100000,x=0;
	for(int i=1;i<n-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){
			d=min(a[i],d);
		}
		if(a[i]<a[i-1]&&a[i]<a[i+1]){
			x=max(a[i],x);
		}
	}
	cout<<x<<" "<<d;
	return 0;
}
