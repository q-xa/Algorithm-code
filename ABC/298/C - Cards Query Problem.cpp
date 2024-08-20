#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<long long>b[N];
multiset<long long>a[N];
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n>>m;

	while(m--)
	{
		long long c1,c2,c3;
		cin>>c1;
		if(c1==1)
		{
			cin>>c2>>c3;
			a[c3].insert(c2);
			b[c2].insert(c3);
		}
		else if(c1==2)
		{
			cin>>c2;
			cout<<"k ";
			for(auto i:a[c2])
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else if(c1==3)
		{
			cin>>c2;
			cout<<"k ";
			for(auto i:b[c2])
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
