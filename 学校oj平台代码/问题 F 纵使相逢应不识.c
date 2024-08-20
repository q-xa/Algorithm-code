/*题目描述
zbc给你两个整数 a，b。
请你计算并输出 a ， b ， ?（a+b）/3? 这三个整数中的最小整数。
? ? 表示下取整。
输入
第一行包含整数 T，表示共有 T 组数据。

每组数据占一行，包含两个整数 a，b。
（ 1≤T≤1000，0≤a，b≤10^9）。
输出
每组数据输出一行，一个整数，表示结果。
样例输入
4
4 4
1000000000 0
7 15
8 7
样例输出
2
0
7
5
提示
关于向下取整：
（3+5）/3=2
（3+3）/3=2
（3+6）/3=3
（3+7）/3=3*/
#include<stdio.h>
int main()
{
	long long a,b,c,d,t,i;
	while(scanf("%lld",&t)!=EOF)
	{
	   for(i=1;i<=t;i++)
	   {
	   	  while(scanf("%lld%lld",&a,&b)!=EOF)
	   	  {
	   	  	c=(a+b)/3;
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
	             printf("%d\n",c);
	   	  }
	   }
    }
	return 0;
}
