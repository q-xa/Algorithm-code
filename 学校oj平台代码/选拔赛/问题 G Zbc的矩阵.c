#include<stdio.h>
int main()
{
	int n,a,e=1,c=2,d=1,i,j,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=c;
		a=e;
		for(j=n;j>i;j--)
		{
			printf("%d ",a);
			a=a+b;
			b++;
		}
		printf("\n");
		c++;
		e=e+d;
		d++;
	}
	return 0;
}
