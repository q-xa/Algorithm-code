#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll C(ll m,ll n)//从m里边选n个
{
	if(n>m) return 0;
	n=min(n,m-n);
	ll a=1,b=1;
	for(ll i=m;i>=m-n+1;i--)
	{
		b*=i;
		while(a<=n&&b%a==0)
		{
			b/=a;
			a++;
		}
	}
	return b;

}
int main()
{
    ll m,n;	
	cin>>m>>n;
    ll ans=C(m+n-1,n-1);
    cout<<ans<<endl;
    system("pause");
}