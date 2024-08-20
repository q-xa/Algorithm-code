#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,d=0;
	cin>>t;
	while(t--)
	{
		d++;
		int n;
		string b;
		long long a=0,c=0;
		cin>>n;
		cout<<"Case "<<d<<":"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>b;
			if(b=="donate")
			{
				cin>>a;
				c=c+a;
			}
			else if(b=="report")
			{
				cout<<c<<endl;
			}	
		} 
	}
	return 0;
}
