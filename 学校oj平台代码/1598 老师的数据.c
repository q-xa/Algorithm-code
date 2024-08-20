/*题目描述
最近，四位老师在讨论部分数据的性质。性质1：该数据为偶数；性质2：该数据大于4且不大于12。其中老师A喜欢两个性质同时满足的数据，老师B喜欢至少满足其中一种性质的数据，老师C喜欢恰好满足一个性质的数据，老师D喜欢不符合这两个性质的数据。
输入
多组测试数据，每组一个整数 x(0≤x≤1000)
输出
输出喜欢这个整数的老师代号，用空格分隔。
样例输入 Copy
12
样例输出 Copy
A B*/
#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if((a%2)==0&&a>4&&a<=12)
		printf("A B\n");
		else
	    if((a%2)==0)
		printf("B C\n");
		else
		if(a>4&&a<=12)
		printf("B C\n");
		else
		printf("D\n");
	}
	return 0;
}
