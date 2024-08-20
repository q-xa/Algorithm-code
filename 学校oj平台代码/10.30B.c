#include<stdio.h>
int main()
{
	long long i;
	int a[10];
	int t=0,b=0,d=9;
	for(i=1000000000;i<10000000000;i++)
	{
		while(t<10)
		{
			a[t]=i/10;
			t++;
			i=i%10;
		}
		while(b<d)
		{
			if(a[b]!=a[d])
			{
				continue;
			}
			else break;
			b++;
			d--;
		}
		printf("%lld\n",i);
	}
	return 0;
}

