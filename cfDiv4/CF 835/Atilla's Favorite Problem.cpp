#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string q="abcdefjhijklmnopqrstuvwxyz";
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		for(int i=0;i<26;i++)
		{
			if(s[n-1]==q[i])
			{
				cout<<i+1<<endl;
			}
		}
	}
	return 0;
}
