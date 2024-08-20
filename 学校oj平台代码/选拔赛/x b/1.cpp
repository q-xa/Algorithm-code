#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d[9];
	long long a,b,c,ab,ac,bc,abc;
	for(int i=0;i<7;i++)
	{
		cin>>d[i];
	}
	sort(d,d+7);
	a=d[0];
	abc=d[6];
	bc=abc-a;
	for(int i=0;i<7;i++)
	{
		for(int j=i;j<7;j++)
		{
			ab=d[i];
			ac=d[j];
			if(ac+ab==bc)
			{
				b=d[i];
				c=d[j];
			}
		}
	}
	if(b>c)
	{
		cout<<a<<" "<<c<<" "<<b;
	}
	else
	{
		cout<<a<<" "<<b<<" "<<c;
	}
	return 0;
} 
