#include <stdio.h>
int main()
{
    int n=0, i=0, j= 0;
    int sum1,sum2;
    while(scanf("%d",&n)!=EOF)
    {
    sum1=0,sum2=0;	
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
 
    for(i=0;i<n;i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][n-1-i];
    }
    printf("%d %d\n",sum1,sum2);
    }
    return 0;
}

