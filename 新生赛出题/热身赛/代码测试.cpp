#include <stdio.h>
int a[100003];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}
	int b1, b2;
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &b1, &b2);
		printf("%d\n", a[b2] - a[b1 - 1]);
	}
	return 0;
}
