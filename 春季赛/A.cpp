#include<bits/stdc++.h>
using namespace std;
set<string>s1;
int main(){
	set<string>::iterator it;
	string s;
	int k;
	cin>>s;
	cin>>k;
	int o=s.size();
	int r=1;
	if(o>10){
		r=2;
	}
	string l="";
	for(int i=0;i<o;i++){
		l="";
		for(int j=i;j<=k;j++){
				l=l+s[j];
			if(s1.find(l)!=s1.end()){
				s1.insert(l);
			}  
//			cout<<l;
//			cout<<" "<<l<<endl;
		}
	}
	int t=0;
	for(auto it:s1){
//		t++;
//		if(t==k){
			cout<<it<<endl;
//		}
//		cout<<it<<endl;
	}
	return 0;
}
