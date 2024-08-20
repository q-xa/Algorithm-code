#include<stdio.h>
int main()
{
	int i,sum,c=1;
	long long n;
	scanf("%lld",&n);
	long long a[n+5];
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=2;i<=n;i++)
	{
		if(a[1]<a[i])
		{
			sum=a[1];
			a[1]=a[i];
			a[i]=sum;
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
