#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	long double q1,q2;
	q1=pow(a,b);
	q2=pow(b,a);
	if(q1>q2)
	{
		cout<<a;
	}
	else if(q1<q2)
	{
		cout<<b;
	}
	else
	{
		if(a>b)
		{
			cout<<b;
		}
		else
		{
			cout<<a;
		}
	}
	return 0;
}
