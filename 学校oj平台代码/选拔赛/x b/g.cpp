#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,m,s1,s2,s3,k=0;
	int a[15555];
	cin>>x>>y>>m;
	s1=m/x;
	s2=m/y;
	for(int i=0;i<=s1;i++)
	{
		for(int j=0;j<=s2;j++)
		{
			s3=x*i+y*j;
			if(s3>m)
			{
				break;
			}
			else
			{
				a[k]=s3;
				k++;
			}
		}
	}
	sort(a,a+k);
	cout<<a[k-1];
	return 0;
}
