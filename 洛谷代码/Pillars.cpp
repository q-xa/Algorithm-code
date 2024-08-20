#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
        if(a[i-1]>a[i])
        {
            if(a[i]<a[i+1])
			{
                cout<<"NO";
                return 0;
            }
        }
    cout<<"YES";
}
