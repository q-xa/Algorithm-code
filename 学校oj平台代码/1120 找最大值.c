/*题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值。
输入
三个数据，分别为a b c
输出
a b c其中最大的数
样例输入
10 20 30
样例输出
30*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
	{
		d=a;
		a=b;
		b=d;
	}
	
	if(c>a)
	 {
	    d=a;
	  	a=c;
	  	c=d;
	  }
	  
     if(c>b)
	    {
	    	d=b;
	    	b=c;
	    	c=d;
	    }
	    printf("%d\n",a);
	return 0;
}
