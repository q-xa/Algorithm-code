#include <stdio.h>
int a[103];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	int b1, b2, he = 0;
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &b1, &b2);
		for (int i = b1; i <= b2; i++) {
			he += a[i];
		}
		printf("%d\n", he);
		he = 0;
	}
	return 0;
}
