#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long k=s.size();
	long long o=0,x=0,y=0;
	for(int i=0;i<k;i++){
		if(s[i]=='-'){
			o=1;
		}
		else if(o==0){
			x=x*10+s[i]-'0';
		}
		else if(o==1){
			y=y*10+s[i]-'0';
		}
	}
	cout<<x-y;
	return 0;
}
