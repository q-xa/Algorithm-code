#include <bits/stdc++.h>
using namespace std;
const long long N = 4e5 + 4;
long long kmp[N + 4];
string s1, s2;
long long n, m;
set<int>s[N + 4];

int gcd(int n, int m) {
	return m ? gcd(m, n % m) : n; //最大公约数
}

int main() {
	ios::sync_with_stdio(false);//打消iostream的输入 输出缓存，可以节省许多时间，使效率与scanf与printf相差无几
	cin.tie(nullptr);//通过 cin.tie(nullptr) 来解除 cin 和 cout 之间的绑定，进一步加快执行效率
	cin>>n;
	long long a1[10],a2[10],a3[10],a4[10];
	for(int i=0;i<10;i++)
	{
		a1[i]=0;
		a2[i]=0;
		a3[i]=0;
		a4[i]=0;
	}
	int l=1;
	for(int j=1;j<=32;j++)
	{
		if(j>0&&j<=8)
		{
			a1[l]=n%2;
			n=n/2;
            l++;
		}
        if(j==8)
        {
            l=1;
        }
		if(j>8&&j<=16)
		{
		    a2[l]=n%2;
			n=n/2;
            l++;
		}
        if(j==16)
        {
            l=1;
        }
		if(j>16&&j<=24)
		{
		    a3[l]=n%2;
			n=n/2;
            l++;
		}
        if(j==24)
        {
            l=1;
        }
		if(j>24&&j<=32)
		{
		    a4[l]=n%2;
			n=n/2;
            l++;
		}
    }
//    cout<<endl;
    long long c1=0,c2=0,c3=0,c4=0,he=0;
	for(int i=8;i>=1;i--)
	{
		c1+=pow(2,i-1)*a1[i];
		c2+=pow(2,i-1)*a2[i];
		c3+=pow(2,i-1)*a3[i];
		c4+=pow(2,i-1)*a4[i];
	}
	long long d[4];
	d[0]=c1;
	d[1]=c2;
	d[2]=c3;
	d[3]=c4;
	sort(d,d+4);
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a1[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a2[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a3[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a4[i];
//	}
//	cout<<endl;
	for(int i=3;i>=0;i--)
	{
		if(c1==d[i])
		{
//			cout<<"1"<<endl;
//			for(int p=1;p<=8;p++)
//			{
//				cout<<a1[p];
//			}cout<<endl;
			int k=32-8*(3-i),o=8;
			for(int j=k;j>k-8;j--)
			{
				he+=pow(2,j-1)*a1[o];
				o--;
			}
		}
		else if(c2==d[i])
		{
//			cout<<"2"<<endl;
//			for(int p=1;p<=8;p++)
//			{
//				cout<<a2[p];
//			}cout<<endl;
			int k=32-8*(3-i),o=8;
			for(int j=k;j>k-8;j--)
			{
				he+=pow(2,j-1)*a2[o];
				o--;
			}
		}
		else if(c3==d[i])
		{
//			cout<<"3"<<endl;
//			for(int p=1;p<=8;p++)
//			{
//				cout<<a3[p];
//			}cout<<endl;
			int k=32-8*(3-i),o=8;
			for(int j=k;j>k-8;j--)
			{
				he+=pow(2,j-1)*a3[o];
				o--;
			}
		}
		else if(c4==d[i])
		{
//			cout<<"4"<<endl;
//			for(int p=1;p<=8;p++)
//			{
//				cout<<a4[p];
//			}cout<<endl;
			int k=32-8*(3-i),o=8;
			for(int j=k;j>k-8;j--)
			{
				he+=pow(2,j-1)*a4[o];
				o--;
			}
		}
	}
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a1[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a2[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a3[i];
//	}
//	cout<<endl;
//	for(int i=1;i<=8;i++)
//	{
//		cout<<a4[i];
//	}
//	cout<<endl;
	cout<<he;
    return 0;
}