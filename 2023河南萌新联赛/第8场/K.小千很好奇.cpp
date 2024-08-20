#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n,a,b;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
		cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
    long long re[100000];
    re[0] = 2;
    int k = 0;
    for(int i=3;i<=1000010;i++) {
    int flag = 0;
    for(int j=0;j<=k;j++){
        if(re[j]>sqrt(i)){
            break;
        }
        if(i % re[j] == 0 ){
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        re[++k] = i;
    }
}
//    for(int i=0;i<k;i++)
//    {
//    	cout<<re[i]<<" ";
//	}
    while(n--)
    {
    	cin>>a>>b;
    	int l1,l2;
    	for(int i=0;i<=k;i++)
    	{
    		if(a<=re[i])
    		{
    			l1=i-1;
    			break;
			}
		}
		for(int i=k;i>=0;i--)
		{
			if(b>=re[i])
			{
				l2=i;
				break;
			}
		}
		cout<<l2-l1<<endl;
	}
	return 0;
}
