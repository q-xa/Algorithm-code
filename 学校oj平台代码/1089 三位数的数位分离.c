/*从键盘输入一个任意的三位正整数，分别求出其个位、十位和百位上的数字。
输入
输入任意的一个三位正整数。
输出
依次输出个位、十位、百位上的数字。以空格间隔，但最后一个数据的后面没有空格，直接换行。
样例输入 Copy
367
样例输出 Copy
7 6 3*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d",&a)!=EOF)
	{
	b=a/100;
	c=(a%100)/10;
	d=a%10;
	printf("%d %d %d\n",d,c,b);	
	}
	return 0;
}
