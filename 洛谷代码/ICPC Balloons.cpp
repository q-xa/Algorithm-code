#include<bits/stdc++.h>
using namespace std;
string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		map<string,int>mp;
		for(int i=0;i<26;i++)
		{
			string g;
			g=a[i];
			mp[g]=1;
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			string g;
			g=s[i];
			mp[g]++;
		}
		int u=0;
		for(int i=0;i<26;i++)
		{
			string g;
			g=a[i];
			if(mp[g]>1)
			{
				u=u+mp[g];
				mp[g]=1;
			}
		}
		cout<<u<<endl;
	}
	return 0;
}
