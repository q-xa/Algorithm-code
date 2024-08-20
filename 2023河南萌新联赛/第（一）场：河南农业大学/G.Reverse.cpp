#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	string s;
	int n;
	cin>>n;
	cin>>s;
	int a[n+2];
	int k=0,l=0;
    s+='0';
	for(int i=0;i<=n;i++)
	{
		if(s[i]=='1')
		{
			l++;
		}
		else if(s[i]=='0')
		{
			a[k]=l;
			l=0;
			k++;
		}
	}
	sort(a,a+k,cmp);
//	for(int i=0;i<k;i++)
//	{
//		cout<<a[i]<<" ";
//	}
	cout<<a[0]+a[1];
	return 0;
}
