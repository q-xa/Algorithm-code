#include<stdio.h>
int main()
{
    long long n,a,b,c,d,e,i;
    int f;
    f=0,d=0;
    scanf("%lld",&n); 
    for(i=1;i<=n;i++)//循环，对正整数1-n逐个进行测试看是否满足条件 
    {
        a=0,b=0,c=i;//初始化 
        while(c)//求出所有的数位和
        {
            a=c%10;
            c=c/10;
            b=b+a;
        }
        e=i;
        while(e) 
        {
            a=e%10;//求出每个位数是多少 
            e=e/10;
            if(a==6&&b%6==0)//根据条件进行判断 
            {
                f++;//对满足条件的数进行统计 
                d=i;//
                break;//判断成立结束循环 
            }
        }
    }
    printf("%d %lld\n",f,d);
    
    return 0;
}

