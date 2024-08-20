#include <bits/stdc++.h>
using namespace std;
int n, m;
int dp[1005][1005];
int v[1008],w[1004];
int main() 
{
//    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
//	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
//	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=dp[i-1][j];
			if(j>=v[i])
			{
				dp[i][j]=max(dp[i][j],dp[i-1][j-v[i]]+w[i]);
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
}