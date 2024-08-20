#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
string s3 = "abcdefghijklmnopqrstuvwxyz";
long long n, m;
set<int>s[N + 4];
map<char, int>mp1, mp2;
int a[N + 4];

int main() {
	ios::sync_with_stdio(false);//����iostream������ ������棬���Խ�ʡ���ʱ�䣬ʹЧ����scanf��printf����޼�
	cin.tie(nullptr);//ͨ�� cin.tie(nullptr) ����� cin �� cout ֮��İ󶨣���һ���ӿ�ִ��Ч��
	cin >> s1;
	cin >> s2;
	long long b1 = s1.size(), b2 = s2.size();
	if (b1 != b2) {
		cout << "No";
		return 0;
	}
	for (int i = 0; i < b1; i++) {
		char e2 = s1[i];
		mp1[e2]++;
		char e1 = s2[i];
		mp2[e1]++;
	}
	for (int i = 0; i < 26; i++) {
		char e = s3[i];
		if (mp1[e] == mp2[e]) {
			continue;
		}
		if (s3[i] == 'a' || s3[i] == 't' || s3[i] == 'c' || s3[i] == 'o' || s3[i] == 'd' || s3[i] == 'e' || s3[i] == 'r' ) {
			if (mp2[e] > mp1[e]) {
				mp1['@'] -= (mp2[e] - mp1[e]);
			} else {
				mp2['@'] -= (mp1[e] - mp2[e]);
			}
		} else {
			cout << "No";
			return 0;
		}
	}
	if (mp1['@'] != mp2['@'] || mp1['@'] < 0 || mp2['@'] < 0) {
		cout << "No";
		return 0;
	}
	cout << "Yes";
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
