#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int n,m;
long long d;
long long a[maxn],b[maxn];
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m>>d;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+1+n);//���� 
	sort(b+1,b+1+m);
	int top1=n,top2=m;
    while(true){
    	//������� 
    	if(abs(a[top1]-b[top2])<=d){
    		cout<<a[top1]+b[top2];
    		return 0;
		}
		else{
			//�ĸ����ĸ���ջ 
			if(a[top1]>b[top2]) top1--;
			else top2--;
		}
		if(top1<=0 || top2<=0){
			cout<<-1;//�����У����-1 
			return 0;
		}
	}
	cout<<-1;
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

