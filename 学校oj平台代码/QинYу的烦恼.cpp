#include<bits/stdc++.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+5],d[n+5];
	d[0]=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		d[i]=d[i-1]+a[i];
	}
	while(m--)
	{
		long long c=0;
		int b1,b2;
		scanf("%d%d",&b1,&b2);
		c=d[b2]-d[b1-1];
		printf("%lld\n",c);
	}
	return 0;
}
