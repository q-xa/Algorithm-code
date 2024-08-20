/*题目描述
输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
输入
a b两个数
输出
a/b的余数
样例输入 Copy
3 2
样例输出 Copy
1*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=fmod(a,b);
	printf("%d\n",t);
	return 0;
}
