/*��Ŀ����
����һ������N�Ľ׳�
����
һ������N�� ��0��=N��=12��
���
����N�Ľ׳�.
��������
5
�������
120*/
#include<stdio.h>
int main()
{
	int a,sum,i;
	sum=1;
	scanf("%d",&a);
	for(i=a;i>1;)
	{
		sum=sum*i;
		i--;
	}
	printf("%d",sum);
	return 0;
}
