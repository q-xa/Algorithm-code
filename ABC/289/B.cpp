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
map<int,int>mp;
int main() {
    set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n>>m;
	long long a[m+3],b[n+3];
	for(int i=0;i<m;i++)
	{
	    cin>>a[i];
		mp[a[i]]=2;	
	}
	int k=0,l;
	for(int i=1;i<=n;i++)
	{
		if(mp[i]==0)
		{
		    b[k]=i;
			mp[i]=1;
			k++;
			for(int j=i-1;j>0;j--)
			{
			    if(mp[j]==2)
			    {
			    	b[k]=j;
			    	k++;
			    	mp[j]=1;
				}
				else
				{
					break;
				}
			}	
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
