#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int c=s.size();
		for(int i=0;i<c;i++)
		{
			if(s[i]=='1')
			{
				b--;
			}
			else if(s[i]=='0')
			{
				a--;
			}
		}
		int i=0,j=c-1,d=0;
		while(i<j)
		{
			if(s[i]!=s[j]&&i!=j)
			{
				if(s[i]=='?')
				{
					if(s[j]=='1')
					{
						s[i]='1';
						b--;
						if(b<0)
						{
							d=1;
							break;
						}
					}
					else
					{
						s[i]='0';
						a--;
						if(a<0)
						{
							d=1;
							break;
						}
					}
				}
				else
				{
					if(s[i]=='1')
					{
						s[j]='1';
						b--;
						if(b<0)
						{
							d=1;
							break;
						}
					}
					else
					{
						s[j]='0';
						a--;
						if(a<0)
						{
							d=1;
							break;
						}
					}
				}
			}
			i++;
			j--;
		}
		i=0;j=c-1;
		while(i<=j)
		{
			if(s[i]==s[j]&&s[i]=='?'&&i!=j)
			{
				if(a>b)
				{
					s[i]='0';
					s[j]='0';
					a=a-2;
				}
				else
				{
					s[i]='1';
					s[j]='1';
					b=b-2;
				}
			}
			else if(s[i]=='?'&&i==j)
			{
				if(a==0&&b==1)
				{
					s[i]='1';
					b--;
    			}
    			else if(b==0&&a==1)
    			{
    				s[i]='0';
    				a--;
				}
				else
				{
					d=1;
				}
			}
			i++;
			j--;
		}
		if(d!=1&&a==0&&b==0)
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
