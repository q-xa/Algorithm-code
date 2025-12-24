#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 4;
int kmp[N + 4],a[N+10];
string s1, s2,s3="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, m,k;
set<int>s[N + 4];
map<int,int>mp1;
map<char,int>mp2;
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
struct hanshu {
};
void primary_code(){
	cin>>s1;
	n=s1.size();
	m=0;k=0;
	for(int i=n-1;i>=0;i--){
		if(s1[i]==s1[m]){
			m++;
		}
		else if(s1[i]!='l'&&s1[i]!='q'&&s1[i]!='b'){
			cout<<"No"<<endl;k=1;
			break;
		}
	}
	if(k==0){
		cout<<"Yes"<<endl;
	}
}

signed main() {
	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t=1;
	cin>>t;
	while(t--){
		primary_code();
	}
	return 0;
}
