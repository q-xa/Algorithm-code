/*题目描述
计算一个整数N的阶乘
输入
一个整数N， （0〈=N〈=12）
输出
整数N的阶乘.
样例输入
5
样例输出
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
