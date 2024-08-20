#include<bits/stdc++.h>
using namespace std;
int n,t1,t2,p1,p2,p3,a,b,x,y,t,he;
int main()
{
	cin>>n>>p1>>p2>>p3>>t1>>t2;
	for(int i=1; i<=n; i++)
	{
		cin>>a>>b;
		he+=(b-a)*p1;
		t=a-y;
		x=a;
		y=b;//求t，赋值x,y
		if(i==1)continue;
		if(t<t1){he+=t*p1;continue;}
		he+=t1*p1;
		t-=t1;//判断两次使用电脑的时间间隔是否达到t1，能不能进入休息状态
		if(t<t2){he+=t*p2;continue;}
		he+=t2*p2;
		t-=t2;//判断两次使用电脑的时间间隔能否达到t1+t2，能不能进入睡眠状态
		he+=t*p3;//把进入睡眠状态后还剩余的时间，也就是休眠状态的时间，乘上p3，并累加。
	}
	cout<<he;
    return 0;
}
