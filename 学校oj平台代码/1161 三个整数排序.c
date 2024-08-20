/*题目描述
输入三个整数，按由小到大的顺序输出。
输入
三个整数
输出
由小到大输出成一行，每个数字后面跟一个空格
样例输入 Copy
2 3 1
样例输出 Copy
1 2 3 */
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
	    printf("%d %d %d",c,b,a);
	return 0;
}
