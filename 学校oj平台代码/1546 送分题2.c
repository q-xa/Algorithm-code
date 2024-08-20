/*题目描述
出题的学长害怕把题目出的太难了所以决定来一道送分题。这道题是这样描述的，一共有三个数，需要你们来比较这三个数的大小，并输出最大值。
输入
三个整数，用逗号隔开。
输出
请输出读入的三个整数的最大值，并在最大值之前输出“max=”。
请注意不需要输出引号，行尾输出换行。
样例输入 Copy
8,5,20
样例输出 Copy
max=20*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
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
	    printf("max=%d\n",a);
	return 0;
}
