#include<stdio.h>
int main()
{
	int n,i,j,e;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1)
		{
			break;
		}
		for(i=1;i<=n;i++)
		{
			for(j=i;j>0;j--)
			{
				printf("%d  ",j);
			}
			for(e=2;e<=n-i+1;e++)
			{
				printf("%d  ",e);
			}
			printf("\n");
		}
		printf("\n");
    }
	return 0;
}

