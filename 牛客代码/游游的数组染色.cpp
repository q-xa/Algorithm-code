#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+4];
	map<long,long>mp1,mp2;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
//		mp1[a[i]]=0;
//		mp2[a[i]]=0;
	}
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
		{
			mp1[a[i]]++;
		}
		else if(s[i]=='B')
		{
			mp2[a[i]]++;
		}
	}
	long long he=0;
	for(int i=0;i<n;i++)
	{
		he=he+mp1[a[i]]*mp2[a[i]];
		mp1[a[i]]=0;mp2[a[i]]=0;
	}
	cout<<he;
	return 0;
}
