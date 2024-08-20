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
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int a[N];
void solve(){
	int n,k;
	cin>>n>>k;
	map<int,int>mp;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	int ans=0;
	for(int i=0;i<=n;i++)
	{
	   if(mp[i]>=1&&ans<k)
	   {
	   	ans++;
	   }
	   else 
	   {
	   	if(ans<=k)
		   {
		   	cout<<i<<endl;
	   	    break;
		    }
	   }
	}
}
int main(){
	IOS;
	int t=1;
	while(t--){
	  solve();
	}
    return 0;
}
