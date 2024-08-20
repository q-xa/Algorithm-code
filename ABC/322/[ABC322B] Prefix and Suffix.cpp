#include <bits/stdc++.h>
using namespace std;
string s1, s2;
long long n, m;

int main() {
	cin>>n>>m;
    cin>>s1;
	cin>>s2;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		//TODO
		if(s1[i]!=s2[i]){
			a=1;
		}
	}
	for(int i=n-1;i>=0;i--){
		//TODO
		if(s1[i]!=s2[m-1]){
			//TODO
			b=1;
		}
		m--;
	}
	if(a==0&&b==0){
		//TODO
		cout<<"0";
	}else if(a==0&&b==1){
		//TODO
		cout<<"1";
	}else if(a==1&&b==0){
		//TODO
		cout<<"2";
	}else if(a==1&&b==1){
		//TODO
		cout<<"3";
	}
	return 0;
}
