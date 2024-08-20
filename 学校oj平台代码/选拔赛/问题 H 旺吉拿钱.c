#include<stdio.h>
int main()
{
	int t,n;
	long long qian1,q2,q3,y,i,j,sum,f;
	long long a[55];
	scanf("%d",&t);
	while(t--)
	{
		q2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
		
			for(j=i+1;j<n;j++)
			{
				sum=0;
				y=a[i]*a[j];
				a[i]=1;
				a[j]=y;
				for(f=0;f<n;f++)
				{
					sum=sum+a[f];
				}
				qian1=sum*2022;
				if(qian1>q2)
				{
					q3=q2;
					q2=qian1;
					qian1=q2;
				}
			}
		}
		printf("%lld\n",q2);
	}
	return 0;
}
