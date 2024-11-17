#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 4;
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
	n=1901;
	int y=1;
	int r=7;
	int he=0;
	while(1){
		if(n==2025){
			cout<<he;
			return;
		}
		if(y==1||y==3||y==5||y==7||y==8||y==10||y==12){
			if(r+7<=31){
				r=r+7;
				int k=r%10;
				if(k==1){
					he++;
				}
			}
			else{
				r=r+7-31;
				int k=r%10;
				if(k==1){
					he++;
				}
				if(y+1<=12){
					y=y+1;
				}
				else{
					y=y+1-12;
					n++;
				}
			}
		}
		else if(y==4||y==6||y==9||y==11){
			if(r+7<=30){
				r=r+7;
				int k=r%10;
				if(k==1){
					he++;
				}
			}
			else{
				r=r+7-30;
				int k=r%10;
				if(k==1){
					he++;
				}
				if(y+1<=12){
					y=y+1;
				}
				else{
					y=y+1-12;
					n++;
				}
			}
		}
		else if((n%400==0||n%4!=0)&&y==2){
			if(r+7<=28){
				r=r+7;
				int k=r%10;
				if(k==1){
					he++;
				}
			}
			else{
				r=r+7-28;
				int k=r%10;
				if(k==1){
					he++;
				}
				if(y+1<=12){
					y=y+1;
				}
				else{
					y=y+1-12;
					n++;
				}
			}
		}
		else if(n%4==0&&y==2){
			if(r+7<=29){
				r=r+7;
				int k=r%10;
				if(k==1){
					he++;
				}
			}
			else{
				r=r+7-29;
				int k=r%10;
				if(k==1){
					he++;
				}
				if(y+1<=12){
					y=y+1;
				}
				else{
					y=y+1-12;
					n++;
				}
			}
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
		primary_code();
	}
	return 0;
}
