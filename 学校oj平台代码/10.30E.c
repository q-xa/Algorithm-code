#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	while(scanf("%d%d%d",&n,&a,&b)!=EOF)
	{
		if(b>a)
		{
		   c=a;
		   a=b;
		   b=c;
	    }
	    d=(a+b)-n;
	    if(d>=0)
	    printf("%d %d\n",b,d);
	    else
	    printf("%d 0\n",b);
	}
	
	return 0;
}

