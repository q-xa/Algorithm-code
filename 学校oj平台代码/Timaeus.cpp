#include <bits/stdc++.h>
using namespace std;
double dp[1000005];
int main() {
	int a, b;
	double p, q;
	cin >> a >> b >> p >> q;
	p /= 100;
	q /= 100;
	if (b == 1) {
		for (int i = 1; i <= a; i++) {
			dp[i] = max(p * (dp[i - 1] + 2) + (1 - p) * (dp[i - 1] + 1), i / (1 - q));
		}
		printf("%.9lf\n", dp[a]);
	} else {
		for (int i = b; i <= a; i++) {
			dp[i] = max(p * (dp[i - b] + 2) + (1 - p) * (dp[i - b] + 1), q * (dp[i - b + 1] + 1) + (1 - q) * (dp[i - b] + 1));
		}
		printf("%.9lf\n", dp[a]);
	}
	return 0;
}
