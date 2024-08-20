#include<stdio.h>
#include<string.h>
int main()
{
	int n,w2=0,z2=0,i,j;
	char bi[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d",&n);
	char w[n+5],z[n+5];
	int w1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int z1[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf("%s",&w);
	scanf("%s",&z);
	for(i=0;i<strlen(w);i++)
	{
		for(j=0;j<26;j++)
		{
			if(w[i]==bi[j])
			{
				w1[j]++;
				break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(w1[i]%2==1)
		{
			w2++;
		}
	}
	for(i=0;i<strlen(z);i++)
	{
		for(j=0;j<26;j++)
		{
			if(z[i]==bi[j])
			{
				z1[j]++;
				break;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(z1[i]%2==1)
		{
			z2++;
		}
	}
	printf("%d\n",w2);
	if(w2<z2)
	{
		printf("YES\n");
	}
	else
	printf("NO\n");
	return 0;
}
