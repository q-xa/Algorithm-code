#include<iostream>
#define int long long
using namespace std;
int f(int n)
{
	if(n==3)
		return 2;
	else if(n==2)
		return 1;	
	else
		return f((n+1)/2)+f((n/2)+1)-1;
}
signed main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int ans;
		if(n==1)
			ans=1;
		else
			ans=f(n);
		cout<<ans<<endl;
	}
	return 0;
}