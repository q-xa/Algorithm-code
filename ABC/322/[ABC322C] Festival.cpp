#include <bits/stdc++.h>
using namespace std;
vector<int>a;
long long n,m;
int main() {
    vector<int>::iterator it;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		//TODO
		int o;
		cin>>o;
		a.push_back(o);
	}
	it=a.begin();
	for(int i=1;i<=n;i++){
		//TODO
		if(i<*it){
			//TODO
			cout<<(*it-i)<<endl;
		}else if(i==*it){
			//TODO
			cout<<"0"<<endl;
			it++;
		}
	}
	return 0;
}
