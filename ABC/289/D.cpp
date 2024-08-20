#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long n, m,k;
set<int>s;
struct shu
{
	long long c;
};
long long a[N+3],b[N+4];
int main() {
    //set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int o;
		cin>>o;
		s.insert(o);
	}
	cin>>k;
	queue<shu>q;
	shu v;
	v.c=0;
	int u=0;
	q.push(v);
	while(q.size()!=0)
	{
		shu f;
		f=q.front();
		q.pop();
		for(int i=0;i<n;i++)
		{
			int e=f.c+a[i];
			if(s.count(e)==0)
			{
				f.c=e;
				s.insert(e);
				if(f.c==k)
				{
					cout<<"Yes";
					u=1;
					return 0;
				}
				else if(f.c<k)
				q.push(f);
			}
		}

	}
	if(u==0)
	{
		cout<<"No";
	}
	return 0;
}
