/**
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  ████━████+
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + +Code is far away from 　
*　　　┃　　　┃ + bug with the animal protecting
*　　　┃　 　 ┗━━━┓ 神兽保佑,代码无bug　
*　　　┃ 　	　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=200005;
ll a[N];
int p[N];
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	memset(p,0,sizeof(p));
	cin>>n;
	vector<ll>q;
	ll sum1=0,sum2=0;
	int p1=1,p2=1;
	for(int i=1;i<=n-1;i++)
	{
		cin>>a[i];
		sum1+=i+1;
		sum2+=i;
		if(sum1!=a[i])
		{
			p1=0;
		}
		if(sum2!=a[i])
		{
			p2=0;
		}
		int k=a[i]-a[i-1];
		q.push_back(a[i]-a[i-1]);
	}
	if(p1==1||p2==1)
	{
		cout<<"YES"<<endl;
		continue;
	}
	sort(q.begin(),q.end());
	ll t=1;
	ll sum=0;
	ll k=0;
	for(int i=0;i<q.size();i++)
	{
		if(q[i]>n||p[q[i]]==1)
		{
		    k=q[i];	
		}
		else
		{
			p[q[i]]=1;
		} 
	}
	int c=0;
	for(int i=1;i<=n;i++)
	{
		if(p[i]==0)
		{
			sum+=i;
			c++;
		}
	}
	if((sum==k&&c==2)||(c==1))
	{
		cout<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}

