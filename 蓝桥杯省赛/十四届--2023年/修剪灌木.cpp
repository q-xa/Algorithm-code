#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long he;
	he=n*2;
	for(int i=0;i<n/2;i++){
		he=he-2;
		cout<<he<<endl;
	}
	if(n%2!=0){
		he=he-2;
		cout<<he<<endl;
		he=he+2;
	}
	for(int i=0;i<n/2;i++){
		cout<<he<<endl;
		he=he+2;
	}
	return 0;
}
