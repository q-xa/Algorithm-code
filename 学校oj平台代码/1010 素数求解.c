/*��Ŀ����
���������ж��У�ÿһ�������������������������������Χ�ڵ�������û�����������Not Found.
����
�������ݣ�ÿһ������������
���
��Χ�ڵ�����
�������� Copy
2 9
20 10
14 15
������� Copy
2 3 5 7
11 13 17 19?
Not Found.
��ʾ
ע����������������һ����С����*/
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
