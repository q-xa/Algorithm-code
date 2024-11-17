#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n;
	long long a[n+10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	long long he=0;
	for(int j=0;j<n-2*k+2;j++){
		long long su=0,u=j;
		for(int i=0;i<k;i++){
			su+=a[u];
			u+=2;
		}
		he=max(su,he);
	}
	cout<<he;

	return 0;
}
