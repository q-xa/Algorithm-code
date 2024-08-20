#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if(a==0)
		{
			printf("0\n");
			continue;
		}
		int c=pow(a,6);
		printf("%d",c);
		if(b==0)
		{
			printf("\n");
			continue;
		}
		for(i=b;i>0;i--)
		{
			printf("00");
		}
		printf("\n");
	}
	return 0;
}

