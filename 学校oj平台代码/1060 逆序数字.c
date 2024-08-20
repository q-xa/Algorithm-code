/*题目描述
 输入一个int型整数，将其逆序输出，每个数字后有一个空格
输入
 输入一个整数n，你可以假设n在int范围内
输出
将n按其逆序输出，每个数字后有一个空格，输出占一行。例如，输入12354，输出4 5 3 2 1
样例输入
12345
样例输出
5 4 3 2 1*/
#include<stdio.h>
int main()
{
	int n,t,b;
	while(scanf("%d",&n)!=EOF)
	{
	b=n;
	for(t=n;t>0;)
	{
		b=b%10;
		printf("%d ",b);
	    t=t/10;
		b=t;
	}
	printf("\n");
    }
	return 0;
}
