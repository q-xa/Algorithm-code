#include<bits/stdc++.h>
using namespace std;
const int N=1e7+3;
long long n;
long long a[N],b;
set<long long>s;
int main(){
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++){
		if((long long)pow(i,2)-(long long)pow(i-1,2)>n)
		{
			b=i-1;break;
		}
		else{
			a[i]=(long long)pow(i,2);
		}
	}
	cout<<b<<endl;
	for(int i=b;i>0;i--){
	    for(int j=0;j<i;j++){
			if(a[i]-a[j]<=n&&a[i]-a[j]>0){
				s.insert(a[i]-a[j]);
			}
		}
	}
	cout<<s.size();
	return 0;
}
