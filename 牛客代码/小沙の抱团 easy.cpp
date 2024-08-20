#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,j=0;
	cin>>a;
	if(a<=2)
	{
		cout<<"0";
	}
	else 
	{
		while(1)
		{
			a=a/2+1;
			j++;
			if(a<=2)
			{
				break;
			}
		}
		cout<<j;
	}
    return 0;
}
