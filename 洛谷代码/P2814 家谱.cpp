#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
map<string,string>m;
string find(string x)
{
	if(x!=m[x]) m[x]=find(m[x]);
	return m[x];
}
int main()
{
    char a;
	string s1,s2;
	while(cin>>a)
	{
		string c1;
		c1=a;
		if(c1=="$")
		{
			return 0;
		}
		if(c1=="#")
		{
			cin>>s1;
			if(m[s1]=="")
			m[s1]=s1;
		}
		else if(c1=="+")
		{
			cin>>s2;
			m[s2]=s1;
		}
		else
		{
			cin>>s2;
			cout<<s2<<" "<<find(s2)<<endl;
		}
	 } 
	return 0;
}

