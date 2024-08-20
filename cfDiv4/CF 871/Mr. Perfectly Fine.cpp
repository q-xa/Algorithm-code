#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long sj;
		string jn;
		long long a=1000000,b=1000000,ab=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>sj>>jn;
			if(jn=="10")
			{
				a=min(a,sj);
			}
			else if(jn=="01")
			{
				b=min(b,sj);
			}
			else if(jn=="11")
			{
				ab=min(ab,sj);
			}
		}
		if(a==1000000||b==1000000)
		{
			if(ab!=1000000)
			cout<<ab<<endl;
			else
			cout<<"-1"<<endl;
		}
		else if(ab!=1000000)
		{
			if(a+b>ab)
			{
				cout<<ab<<endl;
			}
			else
			{
				cout<<a+b<<endl;
			}
		}
		else
		{
			cout<<a+b<<endl;
		}
	}
	return 0;
}
