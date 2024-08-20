#include<stdio.h>
#include<math.h>
int main()
{
    long long n,c=0;
    int d=0,i;
    scanf("%lld",&n);
    do
    {
    	i=n%10;
    	c=c+i*pow(2,d);
    	d++;
    	n=n/10;
    	if(n==0)
    	break;
    }
    while(1);
    printf("%lld",c);
	return 0;
}

