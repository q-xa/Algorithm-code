#include<stdio.h>
#include<string.h>
int main()
{
	const char a[200];
	char a1[]="a";char a2[]="d";
	char a3[]="g";char a4[]="j";
    char a5[]="m";char a6[]="p";
	char a7[]="t";char a8[]="w";
	char a9[]="b";char a10[]="e";
	char a11[]="h";char a12[]="k";
	char a13[]="n";char a14[]="q";
	char a15[]="u";char a16[]="x";
	char a17[]="c";char a18[]="f";
	char a19[]="i";char a20[]="l";
	char a21[]="o";char a22[]="r";
	char a23[]="v";char a24[]="y";
	char a25[]="s";char a26[]="z";
	char a27[]=" ";
	int c=0,i;
     gets(a);
	for(i=0;i<200;i++)
	{
		if(strcmp(a[i],a1))
		{c=c+1;}
		else if(strcmp(a[i],a2))
		{c=c+1;}
		else if(strcmp(a[i],a3))
		{c=c+1;}
		else if(strcmp(a[i],a4))
		{c=c+1;}
		else if(strcmp(a[i],a5))
		{c=c+1;}
		else if(strcmp(a[i],a6))
		{c=c+1;}
		else if(strcmp(a[i],a7))
		{c=c+1;}
		else if(strcmp(a[i],a8))
		{c=c+1;}
		else if(strcmp(a[i],a9))
		{c=c+2;}
		else if(strcmp(a[i],a10))
		{c=c+2;}
		else if(strcmp(a[i],a11))
		{c=c+2;}
		else if(strcmp(a[i],a12))
		{c=c+2;}
		else if(strcmp(a[i],a13))
		{c=c+2;}
		else if(strcmp(a[i],a14))
		{c=c+2;}
		else if(strcmp(a[i],a15))
		{c=c+2;}
		else if(strcmp(a[i],a16))
		{c=c+2;}
		else if(strcmp(a[i],a17))
		{c=c+3;}
		else if(strcmp(a[i],a18))
		{c=c+3;}
		else if(strcmp(a[i],a19))
		{c=c+3;}
		else if(strcmp(a[i],a20))
		{c=c+3;}
		else if(strcmp(a[i],a21))
		{c=c+3;}
		else if(strcmp(a[i],a22))
		{c=c+3;}
		else if(strcmp(a[i],a23))
		{c=c+3;}
		else if(strcmp(a[i],a24))
		{c=c+3;}
		else if(strcmp(a[i],a25))
		{c=c+4;}
		else if(strcmp(a[i],a26))
		{c=c+4;}
		else if(strcmp(a[i],a27))
		{c=c+1;}
	}
	printf("%d",c);
	return 0;
}

