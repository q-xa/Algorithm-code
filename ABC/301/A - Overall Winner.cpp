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
	cin >> n;
	long long a = 0, b = 0;
	cin >> s1;
	for (int i = 0; i < n; i++) {
		if (s1[i] == 'T') {
			a++;
		} else {
			b++;
		}
	}
	if (a > b) {
		cout << "T";
	} else if (a < b) {
		cout << "A";
	} else if (a == b) {
		if (s1[n - 1] == 'A') {
			cout << "T";
		} else {
			cout << "A";
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
