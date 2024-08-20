#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=2;i<a;i=i+2)
	{
		if((a-i)%2==0)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
