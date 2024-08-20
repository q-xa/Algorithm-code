#include<bits/stdc++.h>
using namespace std;
long long a[300005],b[300005];
int main()
{
	int q;
	cin>>q;
	while(q--)//多测
	{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld %lld",&a[i],&b[i]);//输入a[i],b[i]
		long long ans=0,mn;
	for(int i=1;i<=n-1;i++)
	{
		ans+=max(0ll,a[i+1]-b[i]);//下一只如果是先打残再炸死需要的子弹
		a[i+1]=min(a[i+1],b[i]);//打残后剩余血量
	}
	ans+=max(0ll,a[1]-b[n]);//注意是个环
	a[1]=min(a[1],b[n]);//处理和循环内一样的
	mn=a[1];
	for(int i=1;i<=n;i++)
	mn=min(mn,a[i]);//找到最小的一个干掉，然后剩下都残了，上一个死了下一个直接炸死
	cout<<ans+mn<<endl;
}
	return 0;
}
