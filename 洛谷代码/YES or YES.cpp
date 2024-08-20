#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		if(a[0]=='y'||a[0]=='Y')
		{
			if(a[1]=='e'||a[1]=='E')
			{
				if(a[2]=='s'||a[2]=='S')
				{
					cout<<"YES"<<endl;
				}
				else
				cout<<"NO"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
