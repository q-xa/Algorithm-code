#include<bits/stdc++.h>
using namespace std;
long long a[300005],b[300005];
int main()
{
	int q;
	cin>>q;
	while(q--)//���
	{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld %lld",&a[i],&b[i]);//����a[i],b[i]
		long long ans=0,mn;
	for(int i=1;i<=n-1;i++)
	{
		ans+=max(0ll,a[i+1]-b[i]);//��һֻ������ȴ����ը����Ҫ���ӵ�
		a[i+1]=min(a[i+1],b[i]);//��к�ʣ��Ѫ��
	}
	ans+=max(0ll,a[1]-b[n]);//ע���Ǹ���
	a[1]=min(a[1],b[n]);//�����ѭ����һ����
	mn=a[1];
	for(int i=1;i<=n;i++)
	mn=min(mn,a[i]);//�ҵ���С��һ���ɵ���Ȼ��ʣ�¶����ˣ���һ��������һ��ֱ��ը��
	cout<<ans+mn<<endl;
}
	return 0;
}
