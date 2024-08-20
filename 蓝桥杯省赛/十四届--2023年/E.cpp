#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[11];
	for(int i=0;i<=10;i++){
		a[i]=0;
	}
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int x=s[0]-'0';
		int y=s[s.size()-1]-'0';
		a[y]=max(a[x]+1,a[y]);
	}
	sort(a,a+10);
	cout<<n-a[9];
	return 0;
}
