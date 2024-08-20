#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2,s3,s4;
long long n, m;
set<int>s[N + 4];
int a[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	map<string,int>mp;
	cin>>n;
	while(n--)
	{
		cin>>s1;
		if(s1=="sudo")
		{
			cin>>s2>>s3>>s4;
			if(s2!="rm")
			mp[s4]+=2;
			else
			{
				cout<<"wuwuwu"<<endl;
				return 0;
			}
		}
		else if(s1=="pacman")
		{
			cin>>s2>>s3;
			if(s2=="-R")
			{
				mp[s3]--;
			}
			else if(s2=="-Rscn")
			{
				mp[s3]=0;
			}
		}
		else if(s1=="1")
		{
			cin>>s2;
			if(mp[s2]!=2)
			{
				cout<<"no"<<endl;
			}
			else
			{
				cout<<"yes"<<endl;
			}
		}
		else if(s1=="2")
		{
			cin>>s2;
			if(mp[s2]!=0)
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}
	return 0;
}
/**
*　　┏┓　　　┏┓+ +
*　┏┛┻━━━┛┻┓ + +
*　┃　　　　　　　┃
*　┃　　　━　　　┃ ++ + + +
*  ████━████+
*  ◥██◤　◥██◤ +
*　┃　　　┻　　　┃
*　┃　　　　　　　┃ + +
*　┗━┓　　　┏━┛
*　　　┃　　　┃ + + + +Code is far away from 　
*　　　┃　　　┃ + bug with the animal protecting
*　　　┃　 　 ┗━━━┓ 神兽保佑,代码无bug　
*　　　┃ 　	　　　 ┣┓
*　　  ┃ 　　　　　 　┏┛
*　    ┗┓┓┏━┳┓┏┛ + + + +
*　　　　┃┫┫　┃┫┫
*　　　　┗┻┛　┗┻┛+ + + +
*/
