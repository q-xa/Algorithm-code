/*题目描述
zbc给了你一个等差数列的第1项，第3项以及项数(保证公差为整数)，请你求出这个等差数列前n项之和。

等差数列：对于一个 n 项数列 a，如果满足对于任意 i ∈ [1,n)，有 ai+1 - ai = d，其中 d 为定值，则称这个数列为一个等差数列。


输入
第一行有一个整数T(1<=T<=100)，表示有T组测试数据，
第二行到T+1行每行分别有三个整数a1,a3,n,表示等差数列的第 1,3 项以及项数。
数据范围：
(|a1|,|a3|<=3000,1<=n<=1000)
输出
一共T行，每行输出一个整数代表这个等差数列的前n项和。
样例输入 Copy
2
1 3 4
-5 -15 5
样例输出 Copy
10
-75*/
#include<stdio.h>
int main()
{
	int a,a1,a3,n,d,s,i;
	while(scanf("%d",&a)!=EOF)
	{
	   for(i=1;i<=a;i++)
	   {
	   	  while(scanf("%d%d%d",&a1,&a3,&n)!=EOF)
	   	  {
	   	  	 d=(a3-a1)/2;
	   	  	 s=n*a1+n*(n-1)*d/2.0;
	   	  	 printf("%d\n",s);
	   	  }
	   }
    }
	return 0;
}
