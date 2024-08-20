#include <bits/stdc++.h>
using namespace std;
long long n, m = 1048576, t, shu;
int main() {
	cin >> t;
	while (t--) {
		shu = 0;
		cin >> n;
		if (n < m) {
			while (1) {
				if (n * 2 <= m) {
					n = n * 2;
					shu++;
				} else if(n * 2 > m){
					shu += m - n;
					break;
				}
			}
			cout << shu;
		} else {
			long long o = n % m;
			long long p = 0, l = m;
			while (1) {
				if (o < l) {
					p++;
					l = l / 2;
				} else {
					shu += o - l + (20 - p);
					break;
				}
			}
			cout << shu;
		}
	}
	return 0;
}
