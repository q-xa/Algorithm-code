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
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k;
		cin>>n>>k;
		long long a[n+3];
		long long p=0;
		map<long long,long long>b;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]==a[1]&&p<k)
			{
				p++;
				b[a[i]]++;
			}
			if(p>=k)
			{
				b[a[i]]++;
			}	
		}
		if(p>=k&&b[a[n]]>=k)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

