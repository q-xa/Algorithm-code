#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n,c1=0,c2=0;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		if(s1=="Against")
		{
			c1++;
		}
		else if(s1=="For")
		{
			c2++;
		}
	}
	if(c1>c2)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	return 0;
}
