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
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	while(n--){
		long long a1,a2,a3;
		cin>>a1>>a2>>a3;
		if(a3%2==0)
		{
			if(a1-a2>=1)
			{
				cout<<"First"<<endl;
			}
			else
			{
				cout<<"Second"<<endl;
			}
		}
		else
		{
			if(a1-a2>=0)
			{
				cout<<"First"<<endl;
			}
			else
			{
				cout<<"Second"<<endl;
			}
		}
	}
	return 0;
}