#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    unordered_map<string,int>a;
    for(int i=0;i<n;i++)
    {
    	string b;
    	cin>>b;
    	if(b=="younik")
    	{
    		cout<<++c;
    		break;
    	}
    	else if(a[b]==0)
    	{
    		a[b]++;
    		c++;
    	}
    }
	return 0;
}
