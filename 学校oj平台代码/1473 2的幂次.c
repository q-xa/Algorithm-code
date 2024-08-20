/*题目描述
在一行中给出一个不超过20的正整数n，计算2^n。
输入
在一行中给出一个不超过20的正整数n，有多组测试数据，每组一行。
输出
输出2^n的值，每组测试数据占一行。
样例输入
5
样例输出
32
提示
建议练习位运算*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a;
	while(scanf("%d",&n)!=EOF)
	{
		a=pow(2,n);
		printf("%d\n",a);
		
	}
	
	return 0;
}
