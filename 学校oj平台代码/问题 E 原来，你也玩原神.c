#include<stdio.h>
#include<string.h>
int main(void)
{
	char b[200000];
	char j[]="ylnywys";
	gets(b);
	printf("%d",bj(b,j));
	return 0;
}
int bj(char *b,char *j)
{
	int c=0,i,a;
	for(i=0;i<strlen(b);i++)
	{
		for(a=0;a<strlen(j);a++)
		{
		    if(b[i+a]!=j[a])
		    {
		    	break;
		    }
		}
		if(a==strlen(j))
		{
			c++;
		}
	}
	
	return c;
}


