#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,e,a;
	scanf("%d%d",&m,&n);
	int f[m];
	int g[n]; 
	for(i=0;i<m;i++)
	{
		scanf("%d",&f[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&g[i]);
	}
    if(f[0]>g[n-1])
    {
    	a=f[0]-g[n-1];
    	a=fabs(a);
    }
    else if(f[m-1]<g[0])
    {
    	a=g[0]-f[m-1];
    	a=fabs(a);
    }
    else
    a=0;
    printf("%d",a);
	return 0;
}

