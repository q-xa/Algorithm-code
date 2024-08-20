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
    //set<long long>::iterator it;//声明了一个名字为 it 的set迭代器;迭代器就像STL容器的“指针”，可以用“ * ”操作符解除引用。
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	long long a,b,c;
	cin>>a>>b>>c;
	long long d1[b+2][10],d2[c+3][10];
	for(int i=0;i<b;i++)
	{
		cin>>d1[i][0]>>d1[i][1];
	}
	for(int i=0;i<c;i++)
	{
		cin>>d2[i][0]>>d2[i][1];
	}
//	cout<<"k"<<endl;
	long long l1=0,l2=0,r1=d1[0][1],r2=d2[0][1],i1=0,i2=0,he=0;
	while(a--)
	{
//			cout<<r1<<" "<<r2<<endl;
//			cout<<l1<<" "<<l2<<endl<<endl;
		if(d1[i1][0]==d2[i2][0])
		{

			if(min(r1,r2)-max(l1,l2)>=0)
			{
				he=he+(min(r1,r2)-max(l1,l2));
				i1++;
				i2++;
				l1=r1;
				r1=l1+d1[i1][1];
				l2=r2;
				r2=l2+d2[i2][1];				
			}
			else if(r2<=l1)
			{
				i2++;
				l2=r2;
				r2=l2+d2[i2][1];
			}
			else if(r1<=l2)
			{
				i1++;
				l1=r1;
				r1=l1+d1[i1][1];
			}
		}
		else
		{
			if(r2<=l1)
			{
				i2++;
				l2=r2;
				r2=l2+d2[i2][1];
			}
			else if(r1<=l2)
			{
				i1++;
				l1=r1;
				r1=l1+d1[i1][1];
			}
		}
		if(i1>b||i2>c)
		{
			break;
		}
	}
	cout<<he;
	return 0;
}
