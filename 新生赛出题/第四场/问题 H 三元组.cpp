#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	long long he=0;
	for (int a=1; a<n; a++) {
		for (int b=1; b<=n/a; b++) {
			int c=n-a*b;
			if (c>0 && n==a*b+c) {
				he++;
			}
		}
	}
	printf("%lld\n",he);
	return 0;
}
