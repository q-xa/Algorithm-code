#include<stdio.h>
int main()
{
	float a[100][100],h=0;
	int d,b,i,c;
	scanf("%d",&d);
	scanf("%d",&b);
	for(i=0;i<10;i++)
	{
		for(c=0;c<10;c++)
		scanf("%f",&a[i][c]);
	}
	if(b==1)
	{
		i=d;
		h=0;
		for(c=0;c<10;c++)
		h=h+a[d][c];
	}
	else
	{
		b=d;
		h=0;
		for(i=0;i<10;i++)
		h=h+a[i][d];
	}
	printf("%.2f",h);
	return 0;
}

