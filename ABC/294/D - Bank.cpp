#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
long long n, m;
set<long long>s;
int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	set<long long>::iterator it;//声明了一个名字为 it 的set迭代器
	cin>>n>>m;
	long long i=1;
	while(m--)
	{
		long long a1,a2;
		cin>>a1;
		if(a1==1)
		{
			s.insert(i);
			i++;
		}
		else if(a1==2)
		{
			cin>>a2;
			s.erase(a2);
		}
		else if(a1==3)
		{
			it=s.upper_bound(0);
		    cout<<*it<<endl;
		}
	}
	return 0;
}
