#include<bits/stdc++.h>
using namespace std;
char a[8][8];
int main()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>a[i][j];
    int ans=0;
    for(int i=0;i<8;i++)
    {
        bool f=1;
        for(int j=0;j<8;j++)
        {
            if(a[i][j]!='B')
                f=0;
        }
        if(f)
            ans++;
    }
    for(int i=0;i<8;i++)
    {
        bool f=1;
        for(int j=0;j<8;j++)
        {
            if(a[j][i]!='B')
                f=0;
        }
        if(f)
            ans++;
    }
    if(ans==16)
        ans=8;
    cout<<ans;
    return 0;
}

