#include<stdio.h>
int main()
{
	long long n;
	int h;
	int b=1e9+7;
	while(scanf("%lld",&n)!=EOF)
	{
		h=(n%b+n*(n-1))%b;
	    printf("%d\n",h);
	}
    
	return 0;
}

