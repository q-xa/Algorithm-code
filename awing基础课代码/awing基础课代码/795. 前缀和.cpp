#include<iostream>
using namespace std;
const int N=1e6+10;
int n, m;
int a[N], b[N];
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n;i++) {
		cin >> a[i];
		b[i] =b[i-1]+a[i];
	}
	int l, r;
	while (m--) {
		cin >> l >> r;
		cout << b[r] - b[l - 1]<<endl;
	}
	return 0;
}