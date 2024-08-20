#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=10000;
int a[N],b[N],c[N],d[N];
map<int,int>mp;
signed main(){
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++)cin>>c[i];
    for(int i=1;i<=n;i++)cin>>d[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)mp[a[i]+b[j]]++;
     for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)ans+=mp[c[i]+d[j]];
    if(!ans)cout<<"all in"<<endl;
    else cout<<ans<<endl;
}