#include<bits/stdc++.h>
using namespace std;
int m,k;
struct cmp
{
	bool operator () (const int &a , const int &b)
	{
		if(abs(a - b) <= k)
			return false;
		return a < b;
	}
};

int main()
{
    set<int,cmp> c;
	scanf("%d%d",&m,&k);
	while(m--)
	{
		char s[10];
		int x;
        scanf("%s%d",s,&x)
		if(s[0]=='a')
			c.insert(x);
		else if(s[0]=='d')
			c.erase(x);
		else 
		{
			if(c.find(x)!=c.end())
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
	}
	return 0;
}
