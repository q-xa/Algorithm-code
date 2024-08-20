#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>s;
	n=s.size();
	if(s>="-128"&&s<="127")
	{
		cout<<"byte";
	}
	else if(s>="-32768"&&s<="32767")
	{
		cout<<"short";
	}
	else if(s<="2147483647")
	{
		cout<<"int";
	}
	else if(s<="9223372036854775807")
	{
		cout<<"long";
	}
	else
	cout<<"BigInteger";
	return 0;
 } 
