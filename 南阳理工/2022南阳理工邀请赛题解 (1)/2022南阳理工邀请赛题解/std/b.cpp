#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int f[maxn][3][3],n,a,b,c,d;
char s[maxn];
int check(char ch,int l)
{
    if(ch=='A')
    {
        if(l==0) return d;
        else if(l==1) return a;
    }
    else if(ch=='B')
    {
        if(l==1) return d;
        else if(l==2) return c;
    }
    else
    {
        if(l==2) return 0;
        else if(l==0)
        {
            return b;
        }
    }
    return 0;
}
int main()
{
    // freopen("10.in","r",stdin);
    // freopen("10.ans","w",stdout);
    
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    scanf("%s",s+1);
    if(n==1)
    {
        if(s[1]=='A') printf("%d\n",a);
        else if(s[1]=='B') printf("%d\n",c);
        else printf("%d\n",b);
        return 0;
    }
    else
    {
        int ans=0;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                f[2][i][j]=check(s[2],i)+check(s[1],j);
                ans=max(ans,f[2][i][j]);
            } 
        }
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        if(j==k&&k==l) continue;
                        f[i][l][j]=max(f[i][l][j],f[i-1][j][k]+check(s[i],l));
                        ans=max(ans,f[i][l][j]);
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
}
// 6 1 2 3 4
// GGGGGG