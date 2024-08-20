#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=0,c=0;
    cin>>n;
    long long a[n+6];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=1)
        {
            if(a[i-1]<=a[i])
            {
                b++;
            }
            if(a[i-1]>=a[i])
            {
                c++;
            }
        }
    }
    if(b==n-1||c==n-1)
    {
        cout<<"erfen is useful!";
    }
    else
    {
        cout<<"bukeyi";
    }
    return 0;
}
