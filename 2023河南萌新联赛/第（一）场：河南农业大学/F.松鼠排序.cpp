#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int he = 0;
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
	}
	int flag = 1;
	while (flag) 
	{
		for (int i = 1; i <= n; i++) 
		{
			if (a[i] != i) 
			{
				if (a[a[i]] == i) 
				{
					he++;
					int l=a[a[i]];
					a[a[i]] = a[i];
					a[i]=l;
				} 
				else 
				{
					he += 1;
					int l = a[a[i]];
					a[a[i]] = a[i];
					a[i] = l;
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=i)
			{
				break;
			}
			if(i==n&&a[i]==i)
			{
				flag=0;
			}
		}
	}
	cout << he << endl;
	return 0;
}

