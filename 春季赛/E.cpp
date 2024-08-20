#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	long long a1[100005],a2[100005];
	a1[0]=0;a2[0]=0;
	int d1=s1.size();
	int d2=s2.size();
	for(int i=0;i<d1;i++){
			if(s1[i]=='H'){
				a1[i+1]=a1[i]+2;
			}
			else{
				a1[i+1]=a1[i]+1;
			}
	}
	for(int i=0;i<d2;i++){
			if(s2[i]=='H'){
				a2[i+1]=a2[i]+2;
			}
			else{
				a2[i+1]=a2[i]+1;
			}
	}
	int q;
	cin>>q;
	while(q--){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		int h1,h2;
		h1=a1[y1]-a1[x1-1];
		h2=a2[y2]-a2[x2-1];
		if(abs(h1-h2)%3==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
