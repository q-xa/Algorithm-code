#include<stdio.h>
int main()
{
	long long a,b,c,d,i;
	int lw[10]={};
	scanf("%lld%lld",&b,&a);
	for(i=b;i<=a;i++)
	{
		c=i;
		while(1)
		{
			d=c%10;
			lw[d]++;
			c=c/10;
			if(c==0)
			break;
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",lw[i]);
	return 0;
}

