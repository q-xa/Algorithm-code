#include<bits/stdc++.h>
using namespace std;
const long long N=4e5+4;
long long kmp[N+4];
string s1,s2;
long long n,m;
set<int>s[N+4];
int a[N+4];
int main()
{
	ios::sync_with_stdio(false);//����iostream������ ������棬���Խ�ʡ���ʱ�䣬ʹЧ����scanf��printf����޼�
	cin.tie(nullptr);//ͨ�� cin.tie(nullptr) ����� cin �� cout ֮��İ󶨣���һ���ӿ�ִ��Ч��
	cin>>n>>m;
	long long he=n;
	while(m--)
	{
		int p;
		cin>>p;
		if(p==1)
		{
			int u,v;
			cin>>u>>v;
			s[u].insert(v);
			s[v].insert(u);
			if(a[u]==0)
			{
				he--;
			}
			if(a[v]==0)
			{
				he--;
			}
			a[u]++;
			a[v]++;
		}
		else
		{
			int v;
			cin>>v;
			for(int k:s[v])
			{
				a[k]--;
				if(a[k]==0)
				{
					he++;
				}
				s[k].erase(v);
			}
			if(s[v].size())
			{
				s[v].clear();
				he++;
				a[v]=0; 
			}
		}
		cout<<he<<endl;
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

