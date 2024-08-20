#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
        long long b=0,t,i;
        long long a[t+5];
        cin>>t;
        for(i=0;i<t;i++)
        {
        	cin>>a[i];
        	if(a[i]>=1)
        	{
        		b++;
			}
		}
		cout<<b<<endl;
	}
	return 0;
}
