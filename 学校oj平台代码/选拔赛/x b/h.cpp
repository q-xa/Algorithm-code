#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a1,a2,a3,a4,nh,y1,y2,y3,y4,yh,ni;
		int c=0;
		cin>>ni;
		for(int i=1900;i<=ni;i++)
		{
			a1=i/1000;
			a2=(i/100)%10;
			a3=(i/10)%10;
			a4=i%10;
			nh=a1+a2+a3+a4;
			for(int j=1;j<13;j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					y1=j/10;
					y2=j%10;
					for(int k=1;k<=31;k++)
					{
						y3=k/10;
						y4=k%10;
						yh=y1+y2+y3+y4;
						if(nh==yh)
						{
							c++;
						}
					} 
				}
				else if(j==4||j==6||j==9||j==11)
				{
					y1=j/10;
					y2=j%10;
					for(int k=1;k<=30;k++)
					{
						y3=k/10;
						y4=k%10;
						yh=y1+y2+y3+y4;
						if(nh==yh)
						{
							c++;
						}
					} 
				}
				else if(j==2)
				{
					y1=j/10;
					y2=j%10;
					for(int k=1;k<=28;k++)
					{
						y3=k/10;
						y4=k%10;
						yh=y1+y2+y3+y4;
						if(nh==yh)
						{
							c++;
						}
					}
				}
			}
					if(i%4==0&&i%400!=0)
					{
						if(nh==13)
						{
							c++;
						}
					}
		}
		cout<<c<<endl;
	}
	return 0;
}
