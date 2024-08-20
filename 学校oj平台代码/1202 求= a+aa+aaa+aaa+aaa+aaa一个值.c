/*题目描述
求= a+aa+aaa+aaa+aaa+aa...a的值，其中a是一个一位的整数。
例如2+22+222+2222+22222（此时共有5个数相加）
输入
整数a和n（n个数相加，1<= n， a<=9）
输出
s 的值
样例输入
2 2
样例输出
24*/
#include<stdio.h>
int main()
{
	int a,n,i,c=0,d=0;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		c=c*10+a;
		d=c+d;
	}
	printf("%d",d);
	return 0;
}
