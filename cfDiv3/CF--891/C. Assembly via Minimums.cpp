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
	while (n--) {
		cin >> m;
		long long l = m * (m - 1) / 2, p = 1, k = m - 1, f = 1;
		long long a[l + 2], b[m + 4];
		for (int i = 1; i <= l; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + l + 1);
		while (p <= l) {
			b[k] = a[p];
			p = p + k;
			k--;
			f++;
		}
		b[f] = 1000000000;
		for (int i = 1; i <= f; i++ ) {
			cout << b[i] << " ";
		}
		cout << endl;
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
