#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,he=0;
	cin>>n;
	while(n){
		he=he+(n/5);
		n=n/5;
	}
	cout<<he;
	return 0;
}
