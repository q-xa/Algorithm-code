#include <bits/stdc++.h>
using namespace std;
const int N=1e4+2;
int n,m,w1,w2;
int p[N],q[N],cntn[N],cntv[N];
int a,b;
int findn(int x)
{
    if(p[x]!=x) p[x]=findn(p[x]);
    return p[x];
}
int findv(int x)
{
    if(q[x]!=x) q[x]=findv(q[x]);
    return q[x];
}
int main()
{
    cin>>n>>m>>w1>>w2;
    for (int i=1;i<=n;i++)
    {
        p[i]=i;
        cntn[i]=1;
    }
    for(int i=1;i<=m;i++)
    {
        q[i]=i;
        cntv[i]=1;
    }
    while(w1--)
    {
        cin>>a>>b;
        a=findn(a),b=findn(b);
        if(a!=b)
        {
            p[a]=b;
            cntn[b]+=cntn[a];
        }
    }
    while(w2--)
    {
        cin>>a>>b;
        a=-1*a;
        b=-1*b;
        a=findv(a),b=findv(b);
        if(a!=b)
        {
            q[a]=b;
            cntv[b]+=cntv[a];
        }
    }
    int s1,s2;
    s2=cntv[findv(1)];
    s1=cntn[findn(1)];
    if(s1>s2)
    {
    	cout<<s2<<endl;
	}
	else
	{
		cout<<s1<<endl;
	}
    return 0;
}
