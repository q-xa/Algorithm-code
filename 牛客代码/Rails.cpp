#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int a[n+5];
		while(1)
		{
			cin>>a[0];
			if(a[0]==0)
			{
				cout<<endl;
				break;
			}
			for(int i=1;i<n;i++)
			{
				cin>>a[i];
			}
			int dangqian=1;
			map<int,int>mp;
			stack<int>s;
			bool flag=false;

			int l=1,r=0;
			while(r<n) {
				if(l==a[r]) {
					l++,r++;
				} else if(s.size()&&s.top()==a[r]) {
					s.pop();
					r++;
				} else if(l<=n) {
					s.push(l++);
				} else {
					flag=true;
					break;
				}
			}
			if(flag) {
			cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}	
	}
	return 0;
}
