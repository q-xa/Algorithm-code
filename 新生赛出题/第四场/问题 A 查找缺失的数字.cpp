#include<stdio.h>
int main()
{
	int n,m,he1=0,he2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		he1+=i;
	}
	for(int i=0;i<n-1;i++){
		scanf("%d",&m);
		he2+=m;
	}
	printf("%d",he1-he2);
	return 0;
}
