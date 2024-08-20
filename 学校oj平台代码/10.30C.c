#include<stdio.h>
int main()
{
	int n,y,b,i,c;
	int a[1000];
	while(scanf("%d%d",&n,&y)!=EOF)
	{
	    c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(b=0;b<n;b++)
		{
			if(a[b]<=y)
			{
			   c=c+1;
			}
		}
		printf("%d\n",c);
	}
	
	return 0;
}

