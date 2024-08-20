#include<stdio.h>
#include<string.h>
int main()
{
	int n,q,i=0;
	char b[]="I like this at SRG";
	char c[]="I invite you to dine on the second floor of Siyuan under my real name";
    scanf("%d",&n);
    char a[100];
    q=0;
    do
    {
    	gets(a);
    	i++;	
		if(strcmp(a,b)==0)
		q++;
		else if(strcmp(a,c)==0)
		q++;
		else continue;
    }
    while(i<n); 
   	if(q>(n/2))
		printf("6\n");
		else
		printf("sto ZBC orz\n");

	return 0;
}

