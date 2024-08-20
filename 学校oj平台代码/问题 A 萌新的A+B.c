/*题目描述
zbc说热身赛不要为难学弟学妹，就简单出一个A+B吧O（∩_∩）O！
输入
输入两个整数A，B（0<=a，b<=1e10）
输出
输出A+B的结果
样例输入
1 1
样例输出
2*/
#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		c=a+b;
		printf("%.0f\n",c);	
	}
	
	return 0;
}
