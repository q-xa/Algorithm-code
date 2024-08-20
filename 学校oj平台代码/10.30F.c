#include<stdio.h>
int main()
{
    int n,i,h;
    int a[1000];
	while(scanf("%d",&n)!=EOF)
	{
	    h=0;
		for(i=0;i<n;i=i+1)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i=i+1)
		{
			h=a[i]+h;
		}
		if(h%2==0)
		printf("Sword\n");
		else
		printf("hacker\n");
	}
	return 0;
}

