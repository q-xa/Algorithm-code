#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 4;
const int M = 1e9+7;
int kmp[N + 4],a[N+10];
string s1, s2,s3="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, m;
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
	int dp[60][3];
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	dp[0][(s1[0]-'0')%3]=1;
	for(int i=1;i<n;i++){
		int k=(s1[i]-'0')%3;
		if(k==0){
			dp[i][0]=(dp[i-1][0]*2+1)%M;
			dp[i][1]=(dp[i-1][1]*2)%M;
			dp[i][2]=(dp[i-1][2]*2)%M;			
		}
		else if(k==1){
			dp[i][0]=(dp[i-1][0]+dp[i-1][2])%M;
			dp[i][1]=(dp[i-1][0]+1+dp[i-1][1])%M;
			dp[i][2]=(dp[i-1][1]+dp[i-1][2])%M;	
		}
		else if(k==2){
			dp[i][0]=(dp[i-1][0]+dp[i-1][1])%M;
			dp[i][1]=(dp[i-1][1]+dp[i-1][2])%M;
			dp[i][2]=(dp[i-1][2]+dp[i-1][0]+1)%M;
		}
	}
	cout<<dp[n-1][0]%M;
}

signed main() {
	set<int>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	int t=1;
//	cin>>t;
	while(t--){
		primary_code();
	}
	return 0;
}
