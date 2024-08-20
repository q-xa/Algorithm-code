#include<stdio.h>
int main()
{
	int n,m,op,x,i,y;
	int a[10010];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&op,&x,&y);
		int z;
		if(op==1)
		{
			z=a[x-1];
			a[x-1]=a[y-1];
			a[y-1]=z;
		}
		if(op==2)
		{
			if(y==1)
			{
				for(i=0;i<n;i++)
				{
					if(a[i]==x)
					{
						if(i==0)
						printf("NULL\n");
						else
						printf("%d\n",a[i-1]);
					}
				}
			}
			if(y==2)
			{
				for(i=0;i<n;i++)
				{
					if(a[i]==x)
					{
						if(i==n-1)
						printf("NULL\n");
						else
						printf("%d\n",a[i+1]);
					}
				}
			}
		}
		z=a[y-1];
		a[y-1]=a[x-1];
		a[x-1]=z;
	}
    }
	return 0;
}
