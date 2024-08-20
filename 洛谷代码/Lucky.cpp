#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a1,a2,a3,b1,b2,b3;
		a1=s[0]-'0';
		a2=s[1]-'0';
		a3=s[2]-'0';
		b1=s[3]-'0';
		b2=s[4]-'0';
		b3=s[5]-'0';
		if(a1+a2+a3==b1+b2+b3)
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

