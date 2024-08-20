/*题目描述
输入一个整数，判断该数是否为素数。
输入
输入有多行，每行包含一个整数。
输出
输出有多行，每行有一个字符“1”或“0”，若对应的输入为素数则输出1，否则输出0.
样例输入 Copy
137
8
样例输出 Copy
1
0*/
#include<stdio.h>
int main()
{
	int a,i;
	while(scanf("%d",&a)!=EOF)
	{
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
			{break;}
		}
		if(i>=a)
		{
			printf("1\n");
		}
		else
		printf("0\n");
	}
	
	return 0;
}
