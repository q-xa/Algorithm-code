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
	int a,b;
	while(scanf("%d",&a))
	{
	b=a%4;
	if(b<=0)
	printf("Yes\n");
	else
	printf("No\n");
    }
	return 0;
}
