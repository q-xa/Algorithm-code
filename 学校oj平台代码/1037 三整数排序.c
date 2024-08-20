/*题目描述
从键盘输入三个整数x，y和z，按从大到小的顺序输出它们的值。

输入
输入三个整数x，y和z。

输出
按从大到小的顺序输出它们的值。

样例输入
20 16 18
样例输出
20 18 16*/
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
	    printf("%d %d %d",a,b,c);
	return 0;
}
