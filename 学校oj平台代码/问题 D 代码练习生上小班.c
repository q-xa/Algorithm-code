#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a+b+c<=100)
		printf("chang\n");
		if(100<a+b+c&&a+b+c<=200)
		printf("tiao\n");
		if(200<a+b+c&&a+b+c<=300)
		printf("rap\n");
		if(300<a+b+c&&a+b+c<=666)
		printf("lanqiu\n");
		if(666<a+b+c)
		printf("i love suanfa\n");
	} 
	return 0;
}

