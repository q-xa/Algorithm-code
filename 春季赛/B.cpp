#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long a,b;
	cin>>a>>b;
	long long c=a+b;
	if(c%3==0){
		if((c/3)%2==1){
			cout<<"Alice"<<endl;
		}
		else{
			cout<<"Brown"<<endl;
		}
	}
	else{
		if(((c/3)+1)%2==1){
			cout<<"Alice"<<endl;
		}
		else{
			cout<<"Brown"<<endl;
		}
	}
	return 0;
}
