#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,i;
    cin>>n>>m;
    long long a1[n+5],a2[m+5];
    for(i=0;i<n;i++)
    {
    	cin>>a1[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	sort(a2,a2+m);
	for(i=0;i<n;i++)
	{
		int c=m-1,l=0;
        while(l<=c)
        {
            int mid=(l+c)/2;
            if(a2[mid]==a1[i])
            {
                cout<<a1[i]<<" ";
                break;
            }
            else if(a2[mid]<a1[i])l=mid+1;
            else c=mid-1;
        }
    }
	return 0;
}
