/*目描述
一个三角形的三边长分别是a、b、c，那么它的面积为sqrt（p（p-a）（p-b）（p-c）），其中p=（a+b+c）/2。输入这三个数字，计算三角形的面积，四舍五入精确到 1 位小数。每个边长输入时不超过2位小数。
输入
输入a，b，c。（0<=a，b，c<=10000）
输出
输出的值（保留一位小数）
样例输入
3 4 5
样例输出
6.0*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,m;
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2.0;
	m=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1f\n",m);
	return 0;
}
