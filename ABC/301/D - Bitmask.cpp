#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];
int a[N + 4];

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin >> s1;
	cin >> n;
	m = s1.size();
	long long h1 = 0;
	for (int i = 0; i < m; i++) {
		if (s1[i] == '1') {
			h1 += (long long)pow(2, (m - i - 1));
			if (h1 > n) {
				cout << "-1";
				return 0;
			}
		}
	}
	if (h1 > n) {
		cout << "-1";
		return 0;
	} else {
		for (int i = 0; i < m; i++) {
			if (s1[i] == '?') {
				h1 += (long long)pow(2, (m - i - 1));
				if (h1 > n) {
					h1 -= (long long)pow(2, (m - i - 1));
				}
			}
		}
		cout << h1;
	}
	return 0;

}
/**
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  ████━████+
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + +Code is far away from 　
*　　　┃　　　┃ + bug with the animal protecting
*　　　┃　 　 ┗━━━┓ 神兽保佑,代码无bug　
*　　　┃ 　	　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/
