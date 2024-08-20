#include<stdio.h>
int main()
{
	long long a[500][500],n,i;
	long long m,b,c;
	while(scanf("%lld%lld",&n,&m)!=EOF)
{
	for(i=0;i<n;++i)
	{
	for(b=0;b<n;++b)
	{
	 scanf("%lld",&a[i][b]);
	}
    }
    for(i=0;i<n;++i)
	{
	for(b=0;b<n;++b)
	{
	  if(a[i][b]==m)
	printf("%lld %lld\n",i+1,b+1);
	}
    }
}
	return 0;
}

