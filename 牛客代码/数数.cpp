#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
int main()
{
    int t;
    cin>>t;
    long long a[N];
    int b,s=1;
    for(int i=1;i<=4000;i++)
    {
        b=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                b++;
            }
        }
        if(b%2==1)
        {
            a[s]=i;
            s++;
        }
    }
    while(t--)
    {
        int n,o=0;
        cin>>n;
        for(int i=1;i<=s;i++)
        {
            if(a[i]>n)
            {
            	o=1;
                cout<<i-1<<endl;
                break;
            }
        }
        if(o==0)
        cout<<s-1<<endl;
    }
    return 0;
}
