#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		long long d1,d2,d3;
		cin>>a>>b>>c;
		d1=abs(a-b);
		d2=2*d1;
		if((c+d1)/d2<=1&&a<=d2&&b<=d2&&c<=d2)
		{
			if((c+d1)>d2)
			{
				cout<<(c+d1)%d2<<endl;
			}
			else 
			{
				cout<<(c+d1)<<endl;
			}
		} 
		else 
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
