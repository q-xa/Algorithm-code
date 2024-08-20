#include<stdio.h>
#include<string.h>
int main()
{
	int i;
    char a[1000005];
    char b='5',c='*';
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
    	if(b==a[i])
    	{
    		a[i]=c;
    	}
    }
    printf("%s",a);
	return 0;
}
