#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int main()
{
	string s;
	cin>>s;
	int x[N],y[N];
	int a=1,b=1;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]=='('&&s[i-1]=='(')
		{
			x[a]=i;
			a++;
		}
		if(s[i]==')'&&s[i-1]==')')
		{
			y[b]=i-1;
			b++;
		}
	 }
	 long long c=0;
	 for(int i=b-1;i>0;i--)
	 {
	 	for(int j=a-1;j>0;j--)
	 	{
	 		if(x[j]<y[i])
	 		{
	 			c=c+j;
	 			break;
			 }
		 }
	 }
	 cout<<c;
	return 0;
}
