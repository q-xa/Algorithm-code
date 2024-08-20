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
