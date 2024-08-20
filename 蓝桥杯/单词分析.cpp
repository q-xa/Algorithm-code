#include <bits/stdc++.h>
using namespace std;
struct T
{
	string zf;
	int sz;
}a[10000];
bool cmp(int &a,int &b)
{
	return a<b;
}
int main()
{
  string s,t,d;
  multiset<string> b;
  cin>>s;
  int n;
  n=s.size();
  for(int i=0;i<n;i++)
  {
  	t=s[i];
  	b.insert(t);
  }
  for(int i=0;i<n;i++)
  {
  	d=s[i];
  	a[i].zf=d;
    a[i].sz=b.count(d);
  }
  sort(a,a+n,cmp);
  cout<<a[n-1].zf<<endl;
  cout<<a[n-1].sz;
  return 0;
}
