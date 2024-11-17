#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	if (n < 3) {
		cout << 0 << endl;
		return 0;
	}
	
	vector<int> decreasing(n, 1);
	vector<int> increasing(n, 1);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i]) {
				decreasing[i] = max(decreasing[i], decreasing[j] + 1);
			}
		}
	}
	
	for (int i = n - 1; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				increasing[i] = max(increasing[i], increasing[j] + 1);
			}
		}
	}
	
	int max_length = 0;
	for (int i = 0; i < n; i++) {
		if (decreasing[i] > 1 && increasing[i] > 1) {
			max_length = max(max_length, decreasing[i] + increasing[i] - 1);
		}
	}
	
	cout << max_length;
	
	return 0;
}

