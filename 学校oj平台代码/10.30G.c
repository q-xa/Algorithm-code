#include<stdio.h>
int main()
{
	int a[3][5000],b[50001];
	int n,i;
	for(i=0;i<n;i++)
	{
        scanf("%d%d%d",&a[0][i],&a[1][i],&a[2][i]);
        b[i]=a[0][i]*3600+a[1][i]*60+a[2][i];
    }
    
    for(i=0;i<n;i++)
	{
        printf("b[i]/3600" "<<b[i]%3600/60" "<<b[i]%3600%60");
    }
	return 0;
}
/*#include <iostream>
#include <algorithm>
using namespace std;
int a[3][10000],b[100001];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[0][i]>>a[1][i]>>a[2][i];
        b[i]=a[0][i]*3600+a[1][i]*60+a[2][i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        cout<<b[i]/3600<<" "<<b[i]%3600/60<<" "<<b[i]%3600%60<<endl;
    }
    return 0;*/
