#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a=0,b;
        cin>>n;
        long long l1,l2,r1,r2;
        cin>>l1>>r1;
        cin>>l2>>r2;
        long long i=r1;
        while(i>=l1)
        {
            b=n-i;
            if(b>=l2&&b<=r2)
            {
                a++;
            }
            i--;
        }
        cout<<a<<endl;
    }
    return 0;
}
