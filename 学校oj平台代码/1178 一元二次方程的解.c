/*��Ŀ����
��һԪ���η���ax^2+bx+c=0�Ľ⡣
����

a��b��c��ֵ��


���
������X1��X2������X1>=X2����
���������λС��
��������
1 5 -2
�������
0.37 -5.37*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,t1,t2;
	while(scanf("%f %f %f",&a,&b,&c)!=EOF)
	{
		t1=b*b-4*a*c;
		t2=sqrt(t1);
		x1=(-b+t2)/(2.0*a);
		x2=(-b-t2)/(2.0*a);
		printf("%.2f %.2f\n",x1,x2);	
	}
	return 0;
}
