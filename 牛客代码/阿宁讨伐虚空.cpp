#include<bits/stdc++.h>
int main()
{
    double a;
    long long x,l,r,s1,s2;
    scanf("%lld",&x);
    scanf("%lld%lld",&l,&r);
    if(x<=l)
    {
        printf("0.0000000000");
    }
    else if(x>r)
    {
        printf("1.0000000000");
    }
    else
    {
        s1=r-l+1;
        s2=x-l;
        printf("%.10lf",s2/(s1*1.0));
    }
    return 0;
}
