#include <bits/stdc++.h>
using namespace std;
const long long N = 998244353;
long long n, m=0,l=1;
queue<long long>S;
int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	while(n--)
	{
		long long op;
		cin>>op;
		if(op==1)
		{
			long long c1,c2;
			cin>>c1;
			S.push(c1);
			m++;
			l=(l*(long long)pow(10,m)+c1)%N;
			
		}
		else if(op==2)
		{
			m++;
			l=l%(long long)pow(10,m);
		}
		else if(op==3)
		{
			cout<<l%N<<endl;
		}
	}
	return 0;
}
