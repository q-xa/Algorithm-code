#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,k;
    cin>>n>>q>>k;
	long long a[n+2],b[n+3],c[n+3];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		int h1=0,h2=1;
//		for(int j=i+1;j<n;j++)
//		{
//			if(b[j-1]==b[j])
//			{
//				c[i]+=a[j];
//				h1++;
//				if(h1>=k)
//				{
//					break;
//				}
//			}
//			else if(b[j-1]>b[j])
//			{
//				c[i]+=a[j];
//				h1=1;
//			}
//			else
//			{
//				break;
//			}
//		}
		for(int k=i-1;k>=0;k--)
		{
			if(b[k]==b[k+1])
			{
				c[i]+=a[k];
				h2++;
				if(h2>=k)
				{
					break;
				}
			}
			else if(b[k]<b[k+1])
			{
				c[i]+=a[k];
				h2=1;
			}
			else 
			{
				break;
			}
		}
		cout<<c[i]<<" ";
	}
	int x;
	while(q--)
	{
        cin>>x;
        if(x>=n)
		cout<<c[n-1]<<endl;
        else
        cout<<c[x-1]<<endl;
	}
	return 0;
}
