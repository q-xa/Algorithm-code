/*��Ŀ����
��Բ�뾶r��Բ����h ��Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb����scanf�������ݣ���������������ʱҪ������˵����ȡС�������λ���֡�������PI = 3.14
����
������������r��h
���
Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb��������λС����ÿ��������С�
��������
1.5 3
�������
C1=9.42
Sa=7.07
Sb=28.26
Va=14.13
Vb=21.19
*/
#include<stdio.h>
#define PI 3.14
int main()
{
	float r,h,C1,Sa,Sb,Va,Vb;
	scanf("%f%f",&r,&h);
	C1=2*PI*r;
	Sa=PI*r*r;
	Sb=4*PI*r*r;
	Va=(4*PI*r*r*r)/3;
	Vb=Sa*h; 
	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",C1,Sa,Sb,Va,Vb);
	
	
	return 0;
}
