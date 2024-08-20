#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	while(cin>>n)
	{
		int a,b,c;
		a=n%6;
		b=n/6;
		if(a==0)
		{
			cout<<b<<endl;
		}
		else if(n==2)
		{
			cout<<"2"<<endl;
		}
		else if(a==2||a==4)
		{
			cout<<b+1<<endl;
		}
		else if(a==1||a==3)
		{
			cout<<b+2<<endl;
		}
		else
		{
			cout<<b+3<<endl;
		}
	}
	return 0;
}
