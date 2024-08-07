#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 0x3f3f3f3f;
const int N = 2e5 + 4;
int kmp[N + 4], a[N + 10];
string s1[N + 10], s2, s3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, m;
set<int>s[N + 4];
map<int, int>mp1;
map<char, int>mp2;
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
struct hanshu {
};
void primary_code() {
	scanf("%lld%lld", &n, &m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		stack<int>sk;
		int k = a[i];
		while (k > 0) {
			sk.push(k % 2);
			k = k / 2;
		}
		int u = sk.size();
		while (sk.size() != 0) {
			s2 = sk.top() + '0';
			s1[i] = s1[i] + s2;
			sk.pop();
		}
		for (int j = 0; j < (m - u); j++) {
			s1[i] = '0' + s1[i];
		}
	}
	int y = 0;
	for (int i = 0; i < n - 1; i++) {
		int o = a[i] + 1;
		int w1 = 0, w2 = n - 1;
		while (w1 < w2) {
			int mid = (w1 + w2 + 1) >> 1;
			if (a[mid] <= o) w1 = mid;
			else w2 = mid - 1;
		}
		if (w1 == i) {
			w1++;
		}
//		cout<<w1<<" ";
		int l = 0, r = m - 1;
		for (int j = 0; j < m; j++) {
			if (s1[w1][j] == s1[i][j]) {
				l += pow(2, r);
			}
			r--;
		}
		y = max(y, l);
	}
	cout << y;
}

signed main() {
//	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
//	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
//	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t = 1;
//	cin>>t;
	while (t--) {
		primary_code();
	}
	return 0;
}
