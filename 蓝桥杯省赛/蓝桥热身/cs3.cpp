#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e5 + 4;
int kmp[N + 4];
string s1, s2;
int n, m;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
int primary_code(){
	string x,y,z;
	cin>>x>>y>>z;
	if(x==y&&x==z){
		cout<<"="<<endl;
	}
	else{
		cout<<">"<<endl;
	}
	return 0;
}

signed main() {
	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t=1;
//	cin>>t;
	while(t--){
		//TODO
		//cin>>n;
		primary_code();
	}
	return 0;
}
