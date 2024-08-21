#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 0x3f3f3f3f;
const int N = 1e6 + 4;
int l, flag = N;
int ans;
char zimu;
int pan=0;
void solve() {
	string a, b;
	cin >> a >> b;
	string c = "";
	c = a[0] + a;
	for(unsigned int i=0;i<a.size();i++){
		if(a[i]==a[i+1]&&i+1<a.size()){
			continue;
		}else {
			pan=1;
		}
	}
	if (pan==0) {
		cout<<b.size()<<endl;
		for (unsigned int i = 0; i <= a.size(); i++) {
			cout << i << ' ' << a[0] << endl;
		}
	} else {
		for (unsigned int i = 0; i < b.size(); i++) {
			if (a[i] != b[i] ) {
				if (a[i] == b[i + 1] && flag == N) { //一定有答案
					flag = i;
					zimu = b[i];
					string yan = "";
					yan = a.substr(0, i) + zimu + a.substr(i);
					if (yan != b) {
						cout << 0 << endl;
						return;
					}
					for (int j = i; j >= 0; j--) {
						if (b[j] == zimu) {
							ans++;
						} else {
							l = j + 1;
							break;
						}
					}
				} else {
					if (flag != N)break;
					else {
						cout << 0 << endl;
						return;
					}
					
				}
				
			}
		}
		cout << flag - l + 1 << endl;
		for (int i = l; i <= flag; i++) {
			cout << i << ' ' << zimu << endl;
		}
	}
	
}

int main() {
	int t = 1;
//    cin>>t;
	while (t--) {
		solve();
	}
	return 0;
}
