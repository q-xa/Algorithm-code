#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,k;
		cin>>s;
		cin>>k;
		long long a=0,b,c;
		for(int i=0;i<k.size();i++)
		{
			for(int j=0;j<s.size();j++)
			{
				if(k[i]==s[j])
				{
					if(i==0)
					{
						c=j;
					}
					else
					{
						a=a+abs(j-c);
						c=j;
					}
				}
			}
		}
		cout<<a<<endl;
	}
	return 0;
}
