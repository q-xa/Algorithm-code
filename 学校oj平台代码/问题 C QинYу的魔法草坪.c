#include<stdio.h>
int main()
{
	long long sum=0;
	int i,n;
	scanf("%d",&n);
	for(i=n;i>2;i--)
	{
		sum=sum+i*(i-1);
	}
	printf("%lld",sum);
	return 0;
}
