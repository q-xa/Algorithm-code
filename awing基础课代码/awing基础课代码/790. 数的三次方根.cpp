#include<iostream>
using namespace std;
int main() {
	double x, l = -100, r = 100;
	cin >> x;
	while (r - l >= 1e-8) {
		double mid = (r + l) / 2;
		if (mid * mid * mid >= x) r = mid;
		else l = mid;
	}
	printf("%.6lf\n", l);
}