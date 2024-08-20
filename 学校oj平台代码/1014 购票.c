/*题目描述(1014,1015)
某公园门票的票价是每人50元，一次购票满30张，每张可以少收2元。试编写自动计费系统程序。
输入
输入数据有多行，每行是一个购票张数
输出
对于每个购票张数，输出需要付费的金额，每个金额占一行。
样例输入 Copy
30
1
样例输出 Copy
1440
50*/
#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<30)
		printf("%d\n",50*n);
		else
		printf("%d\n",50*n-2*n);
	}
	return 0;
}
