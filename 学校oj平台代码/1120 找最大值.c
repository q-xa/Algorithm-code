/*��Ŀ����
��дһ����������a��b��c����ֵ������������ֵ��
����
�������ݣ��ֱ�Ϊa b c
���
a b c����������
��������
10 20 30
�������
30*/
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
	    printf("%d\n",a);
	return 0;
}
