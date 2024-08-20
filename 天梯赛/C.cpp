#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a==0&&b==0){
		cout<<"biii"<<endl;
		cout<<"stop"<<endl; 
	}
	if(a==1&&b==0){
		cout<<"dudu"<<endl;
		cout<<"move"<<endl;	
	}
	if(a==2){
		cout<<"-"<<endl;
		cout<<"stop"<<endl;
	}
	if(a==0&&b==1){
		cout<<"-"<<endl;
		cout<<"stop"<<endl;
	}
	if(a==1&&b==1){
		cout<<"-"<<endl;
		cout<<"move"<<endl;
	}
	return 0;
}
