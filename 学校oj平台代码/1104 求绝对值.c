/*��ʵ���ľ���ֵ��
����
���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����
���
����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У��������8λС����
�������� Copy
123
-234.00
������� Copy
123.00000000
#include<stdio.h>
234.00000000*/ 
#include<stdio.h>
#include<math.h>
int main()
{
    double t;
	while(scanf("%lf",&t)!=EOF)
{
	t=fabs(t);//absֻ���������� 
	printf("%.8f\n",t);
}
	return 0;
}
