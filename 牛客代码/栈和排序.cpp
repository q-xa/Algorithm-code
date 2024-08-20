#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+5;
signed main()
{
	int a[N],b[N];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=0;i--)
	{
		b[i]=max(a[i],b[i+1]);
	}
	stack<int> c;
    for(int i=0;i<n;i++)
    {
    	c.push(a[i]);
    	while(c.size()&&c.top()>b[i+1])
    	{
    		cout<<c.top()<<' ';
    		c.pop();
    	}
    }
	while(c.size())
	{
		cout<<c.top()<<' ';
		c.pop();
	}
	cout<<endl;
	return 0;
}
