/*题目描述
输入数据有多行，每一行有两个正整数，输出两个正整数范围内的素数，没有素数则输出Not Found.
输入
多行数据，每一行两个正整数
输出
范围内的素数
样例输入 Copy
2 9
20 10
14 15
样例输出 Copy
2 3 5 7
11 13 17 19?
Not Found.
提示
注意两个正整数并不一定由小到大*/
#include<stdio.h>
int main()
{
	int a,b,c,i,d,e;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		e=0;
		if(a<b)
		{
			c=a;
			a=b;
			b=c;
		}
		for(i=b;i<=a;i++)
		{
			for(d=2;d<i;d++)
			{
			   if(i%d==0)
			   {break;}
			}
			if(i==d)
		    {
			printf("%d ",i);
			e=1;
		    }
		}
		if(e==0)
		{
		printf("Not Found.");
	    }
		printf("\n");
	}
	
	return 0;
}
