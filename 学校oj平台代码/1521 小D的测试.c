/*题目描述
小D正在做智力测试，除了最后一个问题外，其他问题他都解决了。
最后一个选择题给出了三个值：1、2、3。凭借他的超自然力量，小D发现A选项和B选项都是错的，只有C选项正确。选项A和B可能是1、2或3。请帮小D打印正确的答案。 
输入
选项A的值 
选项B的值 
输出
正确的答案。
样例输入 Copy
1
3
样例输出 Copy
2
*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d\n%d",&a,&b);
	if(a==1&&b==2)
	printf("3");
	else if(a==1&&b==3)
	printf("2");
	else if(a==2&&b==3)
	printf("1");
	else if(a==2&&b==1)
	printf("3");
	else if(a==3&&b==1)
	printf("2");
	else if(a==3&&b==2)
	printf("1");
	return 0;
}
