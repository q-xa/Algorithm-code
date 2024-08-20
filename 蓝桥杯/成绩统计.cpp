#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n+5];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int q1=0,q2=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>=85)
    {
      q1++;
    }
    if(a[i]>=60)
    {
      q2++;
    }
  }
  double c1,c2;
  c1=q2*100/n*1.0;
  c2=q1*100/n*1.0;
  printf("%.0f%\n%.0f%\n",c1,c2);
  return 0;
}
