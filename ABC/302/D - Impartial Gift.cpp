#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int n,m;
long long d;
long long a[maxn],b[maxn];
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m>>d;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+1+n);//排序 
	sort(b+1,b+1+m);
	int top1=n,top2=m;
    while(true){
    	//四种情况 
    	if(abs(a[top1]-b[top2])<=d){
    		cout<<a[top1]+b[top2];
    		return 0;
		}
		else{
			//哪个大哪个出栈 
			if(a[top1]>b[top2]) top1--;
			else top2--;
		}
		if(top1<=0 || top2<=0){
			cout<<-1;//都不行，输出-1 
			return 0;
		}
	}
	cout<<-1;
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

