#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n],b[n],c[n],d[n];
	for(j=0;j<4;j++)
	{
		if(j==0){
		for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}}
	else if(j==1){
	for(i=0;i<n;i++)
	{
		scanf("%d",b[i]);
	}}
	else if(j==2){
	for(i=0;i<n;i++)
	{
		scanf("%d",c[i]);
	}}
	if(j==3){
	for(i=0;i<n;i++)
	{
		scanf("%d",d[i]);
	}}
	}

	return 0;
}
