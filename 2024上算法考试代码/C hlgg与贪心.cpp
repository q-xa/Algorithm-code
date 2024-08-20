#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
struct c{
	int a;
	int b;
};
int cmp(c x,c y){
	return x.b>y.b;
}
int main(){
	long long n,k;
	cin>>n>>k;
	c t[n+19];
	for(int i=0;i<n;i++){
		cin>>t[i].a;
	}
	for(int i=0;i<n;i++){
		cin>>t[i].b;
	}
	sort(t,t+n,cmp);
	int he = 0;
	for (int i = 0; i < k; i++) {
		he += t[i].b;
	}
	cout << he << endl;
	return 0;
}
