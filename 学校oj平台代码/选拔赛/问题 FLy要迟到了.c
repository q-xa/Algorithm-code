#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,a,b;
	int sum1,sum2;
	scanf("%d%d%d%d",&n,&k,&a,&b);
	sum1=a*fabs(n-1);
	sum2=fabs(k-1)*b+fabs(n-1)*b;
	if(sum1==sum2)
	{
		printf("0\n");
	}
	else if(sum1<sum2)
	{
		printf("2\n");
	}
	else
	{
		printf("1\n");
	}	
	return 0;
}
