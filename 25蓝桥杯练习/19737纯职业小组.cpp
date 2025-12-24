#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 4;
int kmp[N + 4],a[N+10];
string s1, s2,s3="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, m;
map<char,int>mp2;
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
struct hanshu {
};
void primary_code(){
	set<int>s;
	map<int,int>mp1;
	cin>>n>>m;
	int k1=0,k2=0;
	for(int i=0;i<n;i++){
		int l1,l2;
		cin>>l1>>l2;
		s.insert(l1);
		mp1[l1]+=l2;
	}
	for(auto it:s){
		k1+=mp1[it]/3;
		k2+=mp1[it]%3;
//		cout<<it<<" ";
	}
//	cout<<endl;
	if(k1>=m){
		cout<<m*3+(k1-m)*2+k2<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}

signed main() {
//	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t=1;
	cin>>t;
	while(t--){
		primary_code();
	}
	return 0;
}
