#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k=0;
	long long a[4000];
	cin>>n;
	for(int i=0;i<62;i++)
	{
		for(int j=0;j<62;j++)
		{
			long long b;
			if(i==j)
			{
				continue;
			}
			else
			b=pow(2,i)+pow(2,j);
			a[k]=b;
			k++;
		}
	}
	long long s1,s2,s3;
	s2=n;
	for(int i=0;i<k;i++)
	{
		s1=n-a[i];
		s1=abs(s1);
		if(s1<s2)
		{
			s3=s1;
			s1=s2;
			s2=s3;
		}
	}
	cout<<s2;
	return 0;
}
