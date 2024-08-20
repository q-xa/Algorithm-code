#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a;
	cin>>a;
	a=a%1111111111;
	a=a%111111111;
	a=a%11111111;
	a=a%1111111;
	a=a%111111;
	a=a%11111;
	a=a%1111;
	a=a%111;
	a=a%11;
	if(a==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
