#include<bits/stdc++.h>
using namespace std;
int main(){
	string s[110];
	int a,b;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
	string s1,s2="",s3="He Xie Ni Quan Jia!";
	cin>>b;
	int k=0;
	while(cin>>s1){
		for(int i=0;i<a;i++){
			if(s[i]==s1){
				k++;
				s2+="<censored> ";
			}
			else{
				s2=s2+" "+s1;
			}
		}
	}
	if(k>=b){
		cout<<s3;
	}
	else{
		cout<<s2;
	}
	return 0;
}
