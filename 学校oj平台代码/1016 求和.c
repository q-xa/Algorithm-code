/*��Ŀ����
����n��ֵ����1-1/2+1/3-1/4+...+1/n�ĺͣ��������5λС��
����
n ��ֵ
���
������
��������
1
2
3
�������
1.00000
0.50000
0.83333*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	float b,c=0;
	while(scanf("%d",&a)!=EOF)
	{
		c=0;
		for(i=0;i<a;i++)
		{ 
			b=pow(-1,(i+2))*1.0/(i+1);
			c=c+b;
		}
		printf("%.5f\n",c);
	}
	return 0;
}
