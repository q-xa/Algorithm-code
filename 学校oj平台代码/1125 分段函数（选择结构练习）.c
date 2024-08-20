/*题目描述
有一个函数
y={ x x<1
| 2x-1 1<=x<10
\ 3x-11 x>=10
写一段程序，输入x，输出y
输入
一个数x
输出
一个数y
样例输入
14
样例输出
31
提示
使用函数*/
#include<stdio.h>
int main()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
	if(x<1)
	printf("%d\n",x);
	else 
	  if(1<=x&&x<10)
	  printf("%d\n",2*x-1);
	  else
	    printf("%d\n",3*x-11);
	}
	return 0;
}
