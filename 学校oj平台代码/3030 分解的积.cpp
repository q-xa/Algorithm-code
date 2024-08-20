#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	if(n<=3)
	{
		cout<<n;
	}
	else
	{
		a=n/3;
		b=n%3;
		if(b==1)
		{
			c=pow(3,a-1)*4;
			cout<<c;
		}
		else if(b==2)
		{
			c=pow(3,a)*2;
			cout<<c;
		}
		else
		{
			c=pow(3,a);
			cout<<c;
		}
	}
	return 0;
}
