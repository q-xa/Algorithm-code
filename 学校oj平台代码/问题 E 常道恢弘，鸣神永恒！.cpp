#include<stdio.h>
int main()
{
	int t,n,i,j;
	int d,e,sum1,sum2;
	scanf("%d",&t);
	scanf("%d",&n);
	long long a[n+5];
	int c[n+5];
	while(t--)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=1;i<n;i++)
		{
			sum1=0;sum2=0;
			for(j=0;j<=i;j++)
			{
				sum1=sum1+a[j];	
			}
			for(j=i+1;j<n;j++)
			{
				sum2=sum2+a[j];
			}
			c[i]=sum1*114+sum2*514;
		}
		for(i=2;i<n;i++)
		{
			if(c[1]<c[i])
			{
				d=c[i];
				c[i]=c[1];
				c[1]=d;
			}
		}
		printf("%d\n",c[1]);
	}
	return 0;
}
