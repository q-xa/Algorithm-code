#include<stdio.h>
int main()
{
	long long a,b,c,d,e,f,i,j,h;
	int k;
	while(scanf("%lld%lld%d",&a,&b,&k)!=EOF)
	{
		d=0;
		e=0;
		i=1;
		j=i;
	    while(a!=0)
	    {
	    	c=a%k;
	    	d+=i*c;
	    	a/=k;
	    	i*=10;
	    }
	    while(b!=0)
	    {
	    	f=b%k;
	    	e+=j*f;
	    	b/=k;
	    	j*=10;
	    }
	    h=d+e;
	    printf("%lld\n",h);
	}
	return 0;
}

