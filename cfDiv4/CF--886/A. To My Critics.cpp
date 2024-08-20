#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+4;
int next[N+4];
string s1,s2;
int n,m;
int main()
{
	cin>>n;
	while(n--)
	{
	int a[5];
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	if(a[1]+a[2]>=10)
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
