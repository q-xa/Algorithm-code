/*��Ŀ����
��һ������
y={ x x<1
| 2x-1 1<=x<10
\ 3x-11 x>=10
дһ�γ�������x�����y
����
һ����x
���
һ����y
��������
14
�������
31
��ʾ
ʹ�ú���*/
#include<stdio.h>
int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
	if(x<1)
	printf("%d\n",x);
	else 
	  if(1<=x&&x<10)
	  printf("%d\n",2*x-1);
	  else
	    printf("%d\n",3*x-11);
	}
	return 0;
}
