#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[12],b[12];
	cin>>a>>b;
	cout<<a[0];
	for(int i=1;i<strlen(a);i++)
	{
		if(a[i]<b[0])
		{
			cout<<a[i];
		}
		else
		break;
	}
	cout<<b[0];
	return 0;
}
