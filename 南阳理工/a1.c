#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	long long a[n],b[n],c[n],d[n];
	for(j=0;j<4;j++)
	{
		if(j==0){
		for(i=0;i<n;i++)
	{
		scanf("%lld",a[i]);
	}}
	else if(j==1){
	for(i=0;i<n;i++)
	{
		scanf("%lld",b[i]);
	}}
	else if(j==2){
	for(i=0;i<n;i++)
	{
		scanf("%lld",c[i]);
	}}
	if(j==3){
	for(i=0;i<n;i++)
	{
		scanf("%lld",d[i]);
	}}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%lld",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%lld",a[i]);
	}
	return 0;
}
