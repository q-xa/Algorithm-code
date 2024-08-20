#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string a[1005];
	int s[n+3][m+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			s[i][j]=a[i][j]-'0';
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cout<<s[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	int cun=0,shu=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]==0)
			{
				int b=0,c=0;
				if(s[i-1][j]==1&&i-1>=0)
				{
					b++;
				}
				if(s[i+1][j]==1&&i+1<n)
				{
					b++;
				}
				if(s[i][j-1]==1&&j-1>=0)
				{
					b++;
				}
				if(s[i][j+1]==1&&j+1<m)
				{
					b++;
				}
            	if(s[i-1][j]==2&&i-1>=0)
				{
					c++;
				}
				if(s[i+1][j]==2&&i+1<n)
				{
					c++;
				}
				if(s[i][j-1]==2&&j-1>=0)
				{
					c++;
				}
				if(s[i][j+1]==2&&j+1<m)
				{
					c++;
				}
//				cout<<b<<" "<<c;
				if(b==3&&c==0)
				{
					cun=1;
					shu++;
				}
//				cout<<endl;
			}
		}
	}
	if(cun==1)
	{
		cout<<"YES";
		cout<<endl<<shu;
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
