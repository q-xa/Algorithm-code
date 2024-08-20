#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long a,b,xiao=0,da=1000000002;
	cin>>n;
	while(n--){
		cin>>a>>b;
		xiao=max(xiao,(a/(b+1))+1);
		da=min(da,(a/b));
	}
	cout<<xiao<<" "<<da<<endl;
	return 0;
}
