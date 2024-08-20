/*题目描述
求-1-1/2-……-1/n的值。（结果保留3位小数）
输入
输入有一行，包含一个正整数N。
输出
输出包含一行，即计算的结果。
样例输入 Copy
15*/
#include<stdio.h>
int main()
{
	int a,i;
	float b,c=0;
	scanf("%d",&a);
		for(i=0;i<a;i++)
		{ 
			b=-1.0/(i+1);
			c=c+b;
		}
	printf("%.3f\n",c);
	return 0;
}
