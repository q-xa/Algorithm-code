#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b;
        cin>>n;
        int l1,l2,r1,r2;
        cin>>l1>>r1;
        cin>>l2>>r2;
        for(int i=l1;i<=r1;i++)
        {
            b=n-i;
            if(b>=l2&&b<=r2)
            {
                a++;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
