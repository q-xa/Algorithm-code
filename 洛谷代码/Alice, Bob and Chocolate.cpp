#include<bits/stdc++.h>
using namespace std;
int t[100005],qa[100005],qb[100005],mid;
int main() 
{
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>t[i];
		qa[i]=qa[i-1]+t[i]; 
	}
	for(int i=n;i>=1;i--) 
	{
		qb[i]=qb[i+1]+t[i];
		if(qb[i]>qa[n]/2&&!mid) 
		mid=i;
	}
	if(qa[mid-1]>qb[mid+1])
		cout<<mid-1<<' '<<n-mid+1;
	else
		cout<<mid<<' '<<n-mid;
	return 0;
}
