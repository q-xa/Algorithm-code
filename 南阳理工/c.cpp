#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,op,x,y;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<m;j++)
	{
		scanf("%d%d%d",&op,&x,&y);
		int z;
		if(op==1)
		{
			z=a[x-1];
			a[x-1]=a[y-1];
			a[y-1]=z;
		}
		if(op==2)
		{
			if(y==1)
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]==x)
					{
						if(i==0)
						printf("NULL\n");
						else
						printf("%d\n",a[i-1]);
					}
				}
			}
			if(y==2)
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]==x)
					{
						if(i==n-1)
						printf("NULL\n");
						else
						printf("%d\n",a[i+1]);
					}
				}
			}
		}
	}
	return 0;
}
