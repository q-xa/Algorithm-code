/*题目描述
小明买贺卡的时候正好遇到优惠促销活动（每张贺卡单价依然是0.6元），10张及以上8折优惠，50张及以上7折优惠，请帮忙计算，小明买n张贺卡的总花费。

输入
输入一个整数n，表示贺卡的数量。

输出
输出一个实数，保留2位小数，表示总花费。

样例输入 Copy
11
样例输出 Copy
5.28*/
#include<stdio.h>
int main()
{
	int n;
	float a;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<10)
		{a=0.6*n;
		 printf("%.2f\n",a);}
		else
		  if(n>=10&&n<50)
		  {a=0.6*n*0.8;
		  printf("%.2f\n",a);}
		  else
		    {a=0.6*n*0.7;
		    printf("%.2f\n",a);}
	}
	return 0;
}
