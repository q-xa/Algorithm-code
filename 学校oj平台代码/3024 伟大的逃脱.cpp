#include<bits/stdc++.h>
using namespace std;
const int s=10000000;
typedef long long ll;
long long t,h,res=-1;
bool cheak(int m)
{
	int n=t-m;
	for(int i=1;i<=900*n;i++)
	{
		ll w=1000*m+(i+899)/900*100+i;
		ll a=125ll*w*w;
		if(20ll*i*s-a>1ll*h*s)
		{
			res=i;
			return true;
		}
	}
	return false;
}
int main()
{
	cin>>t>>h;
	int l=0,r=t-1;
	while(l<r)
	{
		int m=l+r+1>>1;
		if(cheak(m)) l=m;
		else r=m-1;
	}
	cheak(l);
	if(res==-1) cout<<"-1"<<" "<<"-1";
	else cout<<l<<" "<<res;
	return 0;
}
