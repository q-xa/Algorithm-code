#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	int a=0;
	cin>>n;
	int l=n.size();
	for(int i=0;i<l;i++){
		int k=n[i]-'0';
		if(k%2==1){
			a++;
		}
	}
	cout<<a;
	return 0;
}
