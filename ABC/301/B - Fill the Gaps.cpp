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
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int i = 2;
	cout << a[1] << " ";
	while (i <= n) {
		if (abs(a[i] - a[i - 1]) != 1) {
			if (a[i] > a[i - 1]) {
				int c = a[i - 1];
				while (c < a[i] - 1) {
					c++;
					cout << c << " ";
				}
			} else {
				int c = a[i - 1];
				while (c > a[i ] + 1) {
					c--;
					cout << c << " ";
				}
			}
		}
		cout << a[i] << " ";
		i++;
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
