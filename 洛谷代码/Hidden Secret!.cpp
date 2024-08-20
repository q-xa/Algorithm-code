#include<stdio.h>
#include<string.h>
int main()
{
	int n,t=0;
	scanf("%d",&n);
    getchar();
	while(n--)
	{
		t++;
    	int c1=0,c2=0;
		char a[105],b[105];
        gets(a);
        gets(b);
        int e1,e2;
        e1=strlen(a);
		for(int i=0;i<e1;i++)
		{
			if(a[i]==' ')
			{
				continue;
			}
			else if(a[i]>='a'&&a[i]<='z')
			{
				c1=c1+(a[i]-'a');
			}
			else if(a[i]>='A'&&a[i]<='Z')
			{
				c1=c1+(a[i]-'A');
			} 
		}
		for(int f=0;f<strlen(b);f++)
		{
			if(b[f]==' ')
			{
				continue;
			}
		    else if(b[f]>='a'&&b[f]<='z')
			{
				c2=c2+(b[f]-'a');
			}
			else if(b[f]>='A'&&b[f]<='Z')
			{
				c2=c2+(b[f]-'A');
			}
		}
		if(c1==c2)
	    {
			printf("Case %d: Yes\n",t);
		}
		else
		{
			printf("Case %d: No\n",t);
		}
	}
	return 0;
}
