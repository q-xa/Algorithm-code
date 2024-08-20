#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long m, x;
set<int>s[N + 4];
int a[N + 4];

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin >> x;
	while (x--) {
		cin >> s1;
		long long n = s1.size(), k = 0, j = s1.size();
		for (int i = n - 1; i >= 0; i--) {
			if (i == 0) {
				if (s1[i] >= '5') {
					k = 1;
					s1[i] = '0';
					j = i;
				}

			}
			if (s1[i] >= '5') {
				s1[i] = '0';
				s1[i - 1]++;
				j = i;
			}
		}
		if (k == 1)
			cout << "1";
		for (int i = 0; i < j; i++) {
			cout << s1[i] - '0';
		}
		for (int i = j; i < n; i++) {
			cout << "0";
		}
		cout << endl;
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
