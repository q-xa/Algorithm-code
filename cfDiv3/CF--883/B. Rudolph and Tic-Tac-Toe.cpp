#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s[3];
		cin>>s[0];
		cin>>s[1];
		cin>>s[2];
		int c=0;
		if(s[0][0]==s[0][1]&&s[0][1]==s[0][2]&&s[0][0]!='.')//ºá1
		{
			cout<<s[0][0]<<endl;
			c=1;
		}
		else if(s[0][0]==s[1][0]&&s[1][0]==s[2][0]&&s[0][0]!='.')//Êú1 
		{
			cout<<s[0][0]<<endl;
			c=1;
		}
		else if(s[1][0]==s[1][1]&&s[1][1]==s[1][2]&&s[1][0]!='.')//ºá2 
		{
			cout<<s[1][0]<<endl;
			c=1;
		}
		else if(s[2][0]==s[2][1]&&s[2][1]==s[2][2]&&s[2][0]!='.')//ºá3
		{
			cout<<s[2][0]<<endl;
			c=1;
		}
		else if(s[0][1]==s[1][1]&&s[1][1]==s[2][1]&&s[0][1]!='.')//Êú2
		{
			cout<<s[0][1]<<endl;
			c=1;
		}
		else if(s[0][2]==s[1][2]&&s[1][2]==s[2][2]&&s[0][2]!='.')//Êú3
		{
			cout<<s[0][2]<<endl;
			c=1;
		}
		else if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[0][0]!='.')
		{
			cout<<s[0][0]<<endl;
			c=1;
		}
		else if(s[0][2]==s[1][1]&&s[1][1]==s[2][0]&&s[0][2]!='.')
		{
			cout<<s[0][2]<<endl;
			c=1;
		}
		else
		{
			cout<<"DRAW"<<endl;
		}
	}
	return 0;
}
