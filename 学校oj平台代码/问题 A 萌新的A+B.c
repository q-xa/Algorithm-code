/*��Ŀ����
zbc˵��������ҪΪ��ѧ��ѧ�ã��ͼ򵥳�һ��A+B��O����_�ɣ�O��
����
������������A��B��0<=a��b<=1e10��
���
���A+B�Ľ��
��������
1 1
�������
2*/
#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		c=a+b;
		printf("%.0f\n",c);	
	}
	
	return 0;
}
