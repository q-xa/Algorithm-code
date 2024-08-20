#include<stdio.h>
int main()
{
	int t;
	long long n,b,i;
	scanf("%d",&t);
	for(int j=0;j<t;j++)
	{
		scanf("%lld",&n);
		b=3;
		int a[n];
		for(i=2;i<n;i++)
		{
			a[0]=1;
			a[1]=1;
			while(1)
			{
				if(a[i-2]+a[i-1]<=b)
				{
					a[i]=b;
					break;
				}
				b++;
				if(b>1000000000)
				break;
			}
			if(b>1000000000)
				break;
		}
		if(b>1000000000)
		{
			printf("shenmegouba\n");
		}
		else if(n==1)
		printf("1\n");
		else
		printf("%lld\n",i);
	}
	return 0;
}
