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
		y=b;//��t����ֵx,y
		if(i==1)continue;
		if(t<t1){he+=t*p1;continue;}
		he+=t1*p1;
		t-=t1;//�ж�����ʹ�õ��Ե�ʱ�����Ƿ�ﵽt1���ܲ��ܽ�����Ϣ״̬
		if(t<t2){he+=t*p2;continue;}
		he+=t2*p2;
		t-=t2;//�ж�����ʹ�õ��Ե�ʱ�����ܷ�ﵽt1+t2���ܲ��ܽ���˯��״̬
		he+=t*p3;//�ѽ���˯��״̬��ʣ���ʱ�䣬Ҳ��������״̬��ʱ�䣬����p3�����ۼӡ�
	}
	cout<<he;
    return 0;
}
