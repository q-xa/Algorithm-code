#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long a[1005],b=1,i=1,h=1;
	while(b)
	{
		if(h%3!=0&&h%10!=3)
		{
			a[i]=h;
			i++;
		}
		h++;
		if(i>1000)
		{
			b=0;
			break;
		}
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
 } 
