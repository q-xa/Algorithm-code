#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    s1="codeforces";
    int t;
    cin>>t;
    while(t--)
    {
    	cin>>s2;
    	int n=0;
    	for(int i=0;i<10;i++)
    	{
    		if(s1[i]!=s2[i])
    		{
    			n++;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
