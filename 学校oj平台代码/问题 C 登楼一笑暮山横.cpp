#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,i,t,a1,b1;
	while(scanf("%lld",&t)!=EOF)
	{
	   for(i=1;i<=t;i++)
	   {
	   	  while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
	   	  {
	   	  	 a1=a-1;
	   	  	 b1=fabs(b-c)+(c-1);
	   	  	 if(a1<b1)
	   	  	 printf("1\n");
	   	  	 else if(a1==b1)
	   	  	 printf("3\n");
	   	  	 else 
	   	  	 printf("2\n");
	   	  }
	   }
    }
	return 0;
}
