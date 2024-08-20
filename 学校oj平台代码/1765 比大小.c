#include<stdio.h>
int main()
{
	int n,i,sum1,sum2;
	long long x1,x2,p1,p2;
	scanf("%d",&n);
	while(n)
	{
		int a=0,j=0,b=0,o=0;
		scanf("%lld%lld",&x1,&p1);
		scanf("%lld%lld",&x2,&p2);
	    while(x1)
	    {
	    	a=x1%10;
	    	j++;
	    }
	    sum1=j+p1;
	    while(x2)
	    {
	    	b=x2%10;
	    	o++;
	    }
	    sum2=o+p2;
		if(sum1<sum2)
		{printf("<\n");}
		else if(sum1>sum2)
	    {printf(">\n");}
	    else 
	    {
	    	while(1)
	    	{
	    		a=x1/10;
	    		b=x2/10;
	    		if(a<b)
		        {printf("<\n");
				break;
				}
		        else if(a>b)
	            {printf(">\n");
				break;
				}	
	    		else if(a=b)
	    		{
	    			printf("=\n");
	    		}
	    	}
	    }
	}
	return 0;
}
