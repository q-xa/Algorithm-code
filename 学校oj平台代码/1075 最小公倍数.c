/*题目描述
两个或多个整数公有的倍数叫做公倍数。给定两个正整数，计算这两个数的最小公倍数。
输入
输入包含多组测试数据，每组只有一行，包括两个不大于1000的正整数。
输出
对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。
样例输入 Copy
10 14
样例输出 Copy
70*/
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=(a>b?a:b);
		while(c)
		{
			if(c%a==0&&c%b==0)
			break;
			else
			c++;
		}
		printf("%d\n",c);
	}
	
	return 0;
}
