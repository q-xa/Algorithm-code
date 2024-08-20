#include<stdio.h>
int main()
{
	float a,d;
	int b,t,c=0;
	scanf("%f",&a);
	b=a*10;
    for(t=b;t>0;)
	{
		b=b%10;
		c=c*10+b;
	    t=t/10;
		b=t;
	}	
	d=c*0.001;
	printf("%0.3f",d);
	return 0;
}

