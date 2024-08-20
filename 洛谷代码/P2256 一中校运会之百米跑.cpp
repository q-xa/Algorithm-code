#include<bits/stdc++.h>
using namespace std;
map<string,string>a;
string fin(string x)
{
	if(x!=a[x]) return a[x]=fin(a[x]);
	else return x;
}
int main()
{
    int n,m,k;
	cin>>n>>m;
	string s1,s2;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		a[s1]=s1;
	}
	for(int i=0;i<m;i++)
	{
		cin>>s1>>s2;
		if(fin(s1)!=fin(s2))
		{
			a[fin(s1)]=fin(s2);
		}
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>s1>>s2;
		if(fin(s1)==fin(s2)) cout<<"Yes."<<endl;
		else cout<<"No."<<endl;
	}
	return 0;
}
