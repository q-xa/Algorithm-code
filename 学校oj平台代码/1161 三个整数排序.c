/*��Ŀ����
������������������С�����˳�������
����
��������
���
��С���������һ�У�ÿ�����ֺ����һ���ո�
�������� Copy
2 3 1
������� Copy
1 2 3 */
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
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
	    printf("%d %d %d",c,b,a);
	return 0;
}
