/*题目描述
根据一个年份，判断是否是闰年。

输入
输入为一个整数，表示一个年份。

输出
如果是闰年，输出"Yes"，否则输出"No"。输出单独占一行。

样例输入 Copy
2012
样例输出 Copy
Yes*/
#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d",&a))
	{
	b=a%4;
	if(b<=0)
	printf("Yes\n");
	else
	printf("No\n");
    }
	return 0;
}
