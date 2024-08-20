/*题目描述
设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。PI = 3.14
输入
两个浮点数，r和h
输出
圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。保留两位小数，每个结果后换行。
样例输入
1.5 3
样例输出
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
