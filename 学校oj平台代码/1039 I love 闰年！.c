/*��Ŀ����
����һ����ݣ��ж��Ƿ������ꡣ

����
����Ϊһ����������ʾһ����ݡ�

���
��������꣬���"Yes"���������"No"���������ռһ�С�

�������� Copy
2012
������� Copy
Yes*/
#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
	if(a%4==0&&a%100!=0||a%400==0)
	printf("Yes\n");
	else
	printf("No\n");
    }
	return 0;
}
