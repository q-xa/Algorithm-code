#include<bits/stdc++.h>
using namespace std;
struct wz
{
	int x;
	int y;
};
int main()
{
	long long n;
	string s;
	cin>>n;
	wz a[n+1];
	cin>>s;
	a[0].x=0;a[0].y=0;
	int c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			c1++;
			a[i+1].x=c1;
		}
		else if(s[i]=='L')
		{
			c1--;
			a[i+1].x=c1;
		}
		else if(s[i]=='U')
		{
			c2++;
			a[i+1].y=c2;
		}
		else if(s[i]=='D')
		{
			c2--;
			a[i+1].y=c2;
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i].x==a[j].x&&a[i].y==a[j].y)
			{
				cout<<"Yes";
				return 0;
			}
		}
	}
	cout<<"No";
	return 0;
}
