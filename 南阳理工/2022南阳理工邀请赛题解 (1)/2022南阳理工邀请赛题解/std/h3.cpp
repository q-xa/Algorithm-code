#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
#define rint register int
#define inv inline void
#define ini inline int
#define maxn 1000050
using namespace std;
#define ll long long
const int N=1e7+10;
ll a[N];
ll dp[N];
bool pan[N];
int ans=0;
int main() 
{
	ll idx=0;
	ll a1,b1,ans=0;
	cin>>a1>>b1;
	dp[1]=1;
	for(ll i=2;i<=b1;i++)
	{
	//	printf("%lld\n",i);
		if(!pan[i])
		{
			dp[i]=3;//如果为质数的话默认约数个数为3.
			a[++idx]=i;//把质数记录进去。
		}
		for(ll j=1;i<=b1/a[j];j++)
		{
			//printf("%lld\n",i);
			pan[i*a[j]]=true;
			if(i%a[j]==0)
			{
				ll q=i,cnt=0;
                //cnt 表示i中有多少个a[j]。
				while(q%a[j]==0)q/=a[j],cnt++;
				dp[i*a[j]]=(dp[i]/(cnt*2+1))*(cnt*2+3);
                //多了一个幂次就会多一个2。
				break;
			}else {
				dp[i*a[j]]=dp[i]*3;//如果说a[j]是i*a[j]的最小质因子的话，i约数个数就是i的平方的约数个数乘以a[j]的约数个数。
			}
		}
	}
	//cout<<dp[12]<<endl;
	for(int i=a1;i<=b1;i++)
	{
		ans+=dp[i];
	}
	cout<<ans;
}
