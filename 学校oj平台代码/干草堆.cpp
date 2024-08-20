#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;
    vector<int> b(n); 
    while (k--) 
	{
        int A, B;
        cin>>A>>B;
        b[A-1]++,b[B]--;
    }
    for (int i=1;i<n;i++)
	{
        b[i]=b[i]+b[i-1];
    }
    sort(b.begin(),b.end());
    cout<<b[n/2]<<endl;
    return 0;
}

