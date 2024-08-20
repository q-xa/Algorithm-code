#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int a=0,b=0,c=0;
		int d=s.size();
		for(int i=0;i<d;i++)
		{
			if(s[i]=='A')
			{
				a++;
			}
			else if(s[i]=='B')
			{
				b++;
			}
			else if(s[i]=='C')
			{
				c++;
			}
		}
		if(a+c==b)
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
