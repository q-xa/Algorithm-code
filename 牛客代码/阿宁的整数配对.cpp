#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s1,s2,b=1,c=0;
    cin>>n>>k;
    int a[n+7];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=k;i++)
    {
        s1=a[n]*a[n-1];
        s2=a[b]*a[b+1];
        if(s1>s2)
        {
            c=c+s1;
            n=n-2;
        }
        else
        {
            c=c+s2;
            b=b+2;
        }
    }
    cout<<c;
    return 0;
}
