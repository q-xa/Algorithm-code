#include <stdio.h>
int main() {
	long long n, he = 0, a, b, c, d;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &d);
		he += d;
	}
	scanf("%lld %lld %lld", &a, &b, &c);
	if (he < 10) {
		printf("%lld.00", he);
	} else if (he >= 10 && he < 20) {
		double e = he * 0.1 * a;
		printf("%.2f", e);
	} else if (he >= 20 && he < 30) {
		if (a < b) {
			double e = he * 0.1 * a;
			printf("%.2f", e);
		} else {
			double e = he * 0.1 * b;
			printf("%.2f", e);
		}
	} else if (he >= 30) {
		if (a <= b && a <= c) {
			double e = he * 0.1 * a;
			printf("%.2f", e);
		} else if (b <= a && b <= c) {
			double e = he * 0.1 * b;
			printf("%.2f", e);
		} else if (c <= a && c <= b) {
			double e = he * 0.1 * c;
			printf("%.2f", e);
		}
	}
	return 0;
}
