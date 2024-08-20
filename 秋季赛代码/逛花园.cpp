#include<bits/stdc++.h>
using namespace std;
long long n;
long long b,he=0;
int main(){
	cin>>n;
	while(n--){
		cin>>b;
		long long a,p;
		a=b/10;
		p=b%10;
		he+=(long long)pow(a,p);
	}
	cout<<he;
	return 0;
}
