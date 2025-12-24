#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
	int x=343720*2,y=233333*2;
	float k=15.0/17.0;
	int x1=1,y1=1;
	while(1){
		float q=(x*x1*1.0)/(y*y1*1.0);
		if(q==k){
			int o=(x*x1)*(x*x1)+(y*y1)*(y*y1);
			double u=sqrt(o);
			printf("%.2f",u);
			return 0;
		}
		else if(q<k){
			x1++;
		}
		else if(q>k){
			y1++;
		}
	}
	return 0;
}
