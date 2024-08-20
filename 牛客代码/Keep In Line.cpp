#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int>mp;
    queue<string>a;  
    for(int i=0;i<t;i++)
	{
        int n,he=0;
        cin>>n;
        mp.clear();
        while(n--)
		{
            string a1,a2;
            cin>>a1;
            if(a1=="in")
			{
                cin>>a2;
                a.push(a2);
            }
            else if(a1=="out")
			{
                cin>>a2;
                if(a2==a.front())
				{
                    he++;
                    a.pop();
                    while(a.size()&&mp[a.front()])
                        a.pop();
                }
                else mp[a2]++;
            }
        }
        cout<<he<<endl;
    }
    return 0;
}

