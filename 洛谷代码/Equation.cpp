#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a1,a2;
	cin>>n;
	a2=n;
	a1=a2+n;
	while(1)
	{
		if(a2%2==0||a2%3==0||a2%5==0||a2%7==0)
		{
			if(a2==2||a2==3||a2==5||a2==7)
			{
				a1++;
				a2++;
				continue;
			}
			else
			{
				    if(a1%2==0||a1%3==0||a1%5==0||a1%7==0)
			    {
			    	if(a1>1000000000)
			    	{
			    		break;
			    		return 0;
					}
			    	if(a1!=2&&a1!=3&&a1!=5&&a1!=7)
			        {
			        	break;
			        }
					else
					{
						a1++;
						a2++;
					} 
			    }
			}
		}
		else
		{
			a1++;
			a2++;
		}
	}
	cout<<a1<<" "<<a2;
	return 0;
}
