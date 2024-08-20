#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	unsigned long long i=0;
    do
	{
		if(a[i]=='.')
		{
			break;
		}
		else
		cout<<a[i]-'0';
		i++;
	}
	while(i<a.size());
	return 0;
}
