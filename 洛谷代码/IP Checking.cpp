#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t=0;
	cin>>n;
	while(n--)
	{
		t++;
		string a,b;
		cin>>a;
		cin>>b;
		long long c1=0,c2=0,c3=0;
		int s1[5];
		int j=1,z1,z2;
		z1=a.size();
		for(int i=0;i<z1+1;i++)
		{
			if(a[i]=='.'||i==z1)
			{
				s1[j]=c1;
				c1=0;
				j++;
			}
			else
			c1=c1*10+(a[i]-'0');
		}
		int d=7,f=1;
		int s2[5];
		for(int i=0;i<b.size()+1;i++)
		{
			if(b[i]=='.'||i==b.size())
			{
				d=7;
				s2[f]=c2;
				c2=0;
				f++;
			}
			else
			{
				c2=c2+(b[i]-'0')*pow(2,d);
				d--;
			}
		}
		for(int i=1;i<5;i++)
		{
			if(s1[i]!=s2[i])
			{
				break;
			}
			c3++;
		}
		if(c3==4)
		{
			cout<<"Case "<<t<<": Yes"<<endl;
		}
		else
		{
			cout<<"Case "<<t<<": No"<<endl;
		}
	}
	return 0;
}
