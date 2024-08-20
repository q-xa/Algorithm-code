#include <iostream>
#include<set>

using namespace std;
#define int long long 
const int N = 1e5 + 10;
int kmp[N + 4];
string s1, s2;
int n, m;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}
void primary_code(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>kmp[i];
	}
	while(m--){
		int a;
		cin>>a;
		int l=0,r=n-1;
		while(l<r){
			int mid=(l+r)/2;
			if(a<=kmp[mid]) r=mid;
			else l=mid+1;
		}
		if(kmp[l]==a){
			cout<<l<<" ";
		    l=0,r=n-1;
			while(l<r){
				int mid=(l+r+1)/2;
				if(a>=kmp[mid]) l=mid;
				else r=mid-1;
			}
			cout<<l<<endl;
		}
		else{
			cout<<"-1 -1"<<endl;
		}
	}
}

signed main() {
	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t=1;
//	cin>>t;
	while(t--){
		//TODO
		primary_code();
	}
	return 0;
}
