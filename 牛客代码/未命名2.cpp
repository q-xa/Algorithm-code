#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5+10;
int a[N];
signed main() {
	int n;
	while(cin>>n&&n!=0) {
		while(1) {
			cin>>a[1];
			if(a[1]==0) {
				cout<<endl;
				break;//´Ë¿é½áÊø
			}
			for(int i=2; i<=n; i++) {
				cin>>a[i];
			}
			int dangqian=1;
			map<int,int>mp;
			stack<int>s;
			bool flag=false;

			int l=1,r=1;
			while(r<=n) {
				if(l==a[r]) {
					l++,r++;
				} else if(s.size()&&s.top()==a[r]) {
					s.pop();
					r++;
				} else if(l<=n) {
					s.push(l++);
				} else {
					flag=true;
					break;
				}
			}

			if(flag) {
				cout<<"No\n";
			} else {
				cout<<"Yes\n";
			}
		}
	}
	return 0;
}
