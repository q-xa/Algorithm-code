#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];
int a[N + 4];

int main() {
	ios::sync_with_stdio(false);//����iostream������ ������棬���Խ�ʡ���ʱ�䣬ʹЧ����scanf��printf����޼�
	cin.tie(nullptr);//ͨ�� cin.tie(nullptr) ����� cin �� cout ֮��İ󶨣���һ���ӿ�ִ��Ч��
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		long long a[n + 34];
		a[0] = 0;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			a[i] = a[i] + a[i - 1];
		}
		int o = 0;
		for (int i = 1; i < n; i++) {
			if ((a[n] - a[i]) % 2 == a[i] % 2) {
				o = 1;
			}
		}
		if (o == 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
/**
*������������������+ +
*�������ߩ��������ߩ� + +
*��������������������
*�������������������� ++ + + +
*  ������������������+
*  ������������������ +
*�����������ߡ�������
*�������������������� + +
*��������������������
*���������������� + + + +Code is far away from ��
*���������������� + bug with the animal protecting
*���������� �� ���������� ���ޱ���,������bug��
*�������� ��	������ �ǩ�
*����  �� ���������� ������
*��    �����������ש����� + + + +
*�����������ϩϡ����ϩ�
*�����������ߩ������ߩ�+ + + +
*/
