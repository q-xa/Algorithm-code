#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
int main()
{
	long long k,n;
	    long long l=0,a=1,b=3,c=3;
    	cin>>k;
	    for(n=1;n<k;n++)
		{
			a=a+b;
			b=b+c;
			c++;
		}
		cout<<a%mod<<endl;	
	return 0;
 } 
