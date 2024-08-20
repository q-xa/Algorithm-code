#include<bits/stdc++.h>
using namespace std;
const long long N=1e9+1;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		long long a,b;
	cin>>n>>m;
    a=m;b=n-a;
	if(b>m){
		cout<<a<<' '<<b<<endl;
	}
	else {
		cout<<"-1"<<endl;
	}
}
	return 0;
}
