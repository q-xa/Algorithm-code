#include<bits/stdc++.h>
using namespace std;
const long long N=4e5+4;
long long kmp[N+4];
string s1,s2;
long long n,m;
set<int>s[N+4];
int a[N+4];
int main()
{
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n>>m;
	long long he=n;
	while(m--)
	{
		int p;
		cin>>p;
		if(p==1)
		{
			int u,v;
			cin>>u>>v;
			s[u].insert(v);
			s[v].insert(u);
			if(a[u]==0)
			{
				he--;
			}
			if(a[v]==0)
			{
				he--;
			}
			a[u]++;
			a[v]++;
		}
		else
		{
			int v;
			cin>>v;
			for(int k:s[v])
			{
				a[k]--;
				if(a[k]==0)
				{
					he++;
				}
				s[k].erase(v);
			}
			if(s[v].size())
			{
				s[v].clear();
				he++;
				a[v]=0; 
			}
		}
		cout<<he<<endl;
	}
	return 0;
}
/**
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  ████━████+
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + +Code is far away from 　
*　　　┃　　　┃ + bug with the animal protecting
*　　　┃　 　 ┗━━━┓ 神兽保佑,代码无bug　
*　　　┃ 　	　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/

