#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,he=0;
	cin>>n;
	long long a[n+18];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=1){
			he+=a[i];
		}
	}
	cout<<he;
	return 0;
}
