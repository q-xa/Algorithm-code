#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string b;
		int a1,a2,a3;
		cin>>b>>a3;
		int c1,c2,c3,c4;
		a1=(b[0]-'0')*10+(b[1]-'0');
		a2=(b[3]-'0')*10+(b[4]-'0');
		c1=a1,c2=a2;
		c3=a3%60;c4=a3/60;
		
		//cout<<a1<<" "<<a2<<" "<<c1<<" "<<c2<<endl;
		int d=0;
		while(1)
		{
		    c1=c1+c4;
			if(c2+c3>=60)
			{
				c1=c1+1; 
				c2=c2+c3;
				c2=c2%60;
			}
			else
			{
				c2=c2+c3;
			}
			c1=c1%24;
			//cout<<c1<<" "<<c2<<endl; 

			int e1,e2,e3,e4;
			e1=c1/10;e2=c1%10;e3=c2/10;e4=c2%10;
			if(e1==e4&&e2==e3)
			{
				d++;
			}
			if(c1==a1&&c2==a2)
			{
				cout<<d<<endl;
				break;
			}
		}
	}
	return 0;
}
