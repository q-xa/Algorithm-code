#include<bits/stdc++.h>
using namespace std;
int BFS(int n,int m)
{
	queue<int>q;
	q.push(n);
	while(q.size()!=0)
	{
		int i;
		i=q.front();
		q.pop();
		if(i<m) continue;
		if(i==m) return 1;
		if(i%3==0)
		{
			q.push(i/3);
			q.push(i/3*2);
		}
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(BFS(n,m)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
