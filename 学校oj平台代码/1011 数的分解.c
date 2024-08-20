#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,i;
	for(i=1000;i<10000;i=i+2)
	{
		a=i/1000;
		b=(i%1000)/100;
		c=(i%100)/10;
		d=i%10;
		e=b+d;
		f=a+c;
		if(e==f)
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}

