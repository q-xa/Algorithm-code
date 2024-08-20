#include <bits/stdc++.h>
using namespace std;
const int m=100005;
int hi[m];
int wi[m];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>hi[i];
        cin>>wi[i];
    }
    int ans=0;
    int l=1;
    int r=100000;
    while(l<=r)
    {
        int mid=(l+r)/2;
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            int temx=hi[j]/mid;
            int temy=wi[j]/mid;
            cnt+=(temx*temy);
        }
        if(cnt>=k)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    cout<<min(l,r)<<endl;
}
