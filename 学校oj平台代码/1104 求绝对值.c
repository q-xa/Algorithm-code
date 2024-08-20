/*求实数的绝对值。
输入
输入数据有多组，每组占一行，每行包含一个实数。
输出
对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留8位小数。
样例输入 Copy
123
-234.00
样例输出 Copy
123.00000000
#include<stdio.h>
234.00000000*/ 
#include<stdio.h>
#include<math.h>
int main()
{
    double t;
	while(scanf("%lf",&t)!=EOF)
{
	t=fabs(t);//abs只能用于整数 
	printf("%.8f\n",t);
}
	return 0;
}
