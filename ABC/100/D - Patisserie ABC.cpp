#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<long long>s;

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	int he=abs(a)+abs(b)+abs(c);
    	s.insert(he);
	}
	long long u=0-50000000005;
	s.insert(u);
	int he=0,i=0;it=s.end();
	it--;
	for(;it!=s.begin();it--)
	{
		cout<<*it<<" ";
		he+=*it;
//		i++;
		if(i==m)
		{
			break;
		}
	}
	cout<<he;
	return 0;
}
