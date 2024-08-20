#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
    int a1,a2,b1,b2;
	cin>>n>>a1>>a2>>b1>>b2;
	int c[n+4];
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	for(int i=a1,j=b1;i<=a2;i++,j++)
	{
		int d=c[i];
		c[i]=c[j];
		c[j]=d;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
