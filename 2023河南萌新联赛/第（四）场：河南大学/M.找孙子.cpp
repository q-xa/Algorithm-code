#include<bits/stdc++.h>
using namespace std;
const int N = 1000010;
struct tu
{
    int to,from;
}e;
vector<int> G[N+1];
int m,n,tmp;
int main()
{
    cin>>n>>m;
    for (int i=0;i<m;i++)
	{
        cin>>e.from>>e.to;
        G[e.from].push_back(e.to);
    }
    for (int i=1;i<=n;i++)
	{
        int s=0;
        for(int j=0;j<G[i].size();j++)
		{
            s+=G[G[i][j]].size();
        }
        cout<<s<<' ';
    }
    return 0;
}

