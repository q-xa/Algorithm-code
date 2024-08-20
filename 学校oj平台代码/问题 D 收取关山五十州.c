#include<stdio.h>
int main()
{
	long long n,l,r,i,k;
	while(scanf("%lld",&n)!=EOF)
	{
		for(i=r;i>=l;i--)
		{
			for(k=n;k>0;k--)
			{
				if(k==i) 
				break;
				else continue;
			}
		}
		if(k>=r)
		printf("%lld",k+k);
		else
		printf("%lld",k+r);
		
	}
	return 0;
}
