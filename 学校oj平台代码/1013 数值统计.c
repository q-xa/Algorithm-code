/*题目描述
统计给定的n个数中，负数、零和正数的个数。
输入
输入的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个整数
输出
输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。
样例输入 Copy
6 0 1 2 3 -1 0
样例输出 Copy
1 2 3
提示
多组测试数据*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d",&a)!=EOF)
	{
		b=0;
		c=0;
		d=0;
		for(e=0;e<a;e++)
		{
			scanf("%d",&f);//循环输入数据 
		    if(f<0)
	     	b++;
	    	else if(f==0)
	    	c++;
	    	else
		    d++;
		}
	     printf("%d %d %d\n",b,c,d);//输出结果 	
    }
	return 0;
}

