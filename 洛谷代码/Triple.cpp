#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,e1,e2=0;
    	cin>>n;
    	for(int i=1;i<=n;i++)
    	{
    		a[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&e1);
			a[e1]++;
			if(a[e1]>=3)
			{
				e2=e1;
			}
		}
		if(e2==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<e2<<endl;
		}
	}
	return 0;
}

