#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 4;
int kmp[N + 4], a[N + 10];
string s1, s2[100], s3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, m;
map<int, int>mp1;
map<string, int>mp;
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
struct tj {
	set<string>s;
	int c1;
	string b[100];
	int c2;
	string c[100];
};
void primary_code() {
	cin >> n;
	tj a[100];
	int f = 0;
	while (n--) {
		cin >> s1;
		if (mp[s1] == 0) {
			f++;
			mp[s1] = f;
			s2[f] = s1;
		}
		int k = mp[s1];
		cin >> m;
		for (int i = 0; i < m; i++) {
			string l;
			cin >> l;
			a[k].s.insert(l);
		}
		a[k].c1 = a[k].s.size();
	}
	for (int j = 1; j <= f; j++) {
		int k = mp[s2[j]];
		int o = 0;
		for (auto it : a[k].s) {
			a[k].b[o] = it;
			o++;
		}
		int g = 0;
		for (int i = 0; i < o; i++) {
			string t = a[k].b[i];
			int q;
			q = t.size();
			int y = 0;
			for (int j = 0; j < o; j++) {
				if (j == i) {
					continue;
				}
				int q1 = a[k].b[j].size();
				if (q1 >= q) {
					if (t == a[k].b[j].substr((q1 - q), q)) {
						y = 1;
					}
				}
			}
			if (y == 0) {
				a[k].c[g] = a[k].b[i];
				g++;
			}
		}
		a[k].c2 = g;
	}
	sort(s2 + 1, s2 + f + 1);
	cout << f << endl;
	for (int i = 1; i <= f; i++) {
		int k = mp[s2[i]];
		cout << s2[i] << " " << a[k].c2;
		sort(a[k].c, a[k].c + a[k].c2);
		for (int j = 0; j < a[k].c2; j++) {
			cout << " " << a[k].c[j];
		}
		cout << endl;
	}
}

signed main() {
	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t = 1;
//	cin>>t;
	while (t--) {
		primary_code();
	}
	return 0;
}
