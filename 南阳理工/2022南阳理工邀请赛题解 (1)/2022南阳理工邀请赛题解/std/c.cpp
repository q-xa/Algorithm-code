#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int a[N];
int lo[N];
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		lo[a[i]]=i;
	}
	while(q--){
		int opt,x,y;
		scanf("%d%d%d",&opt,&x,&y);
		if(opt==1){
			int temp1=lo[y];
			int temp2=lo[x];
			swap(a[temp1],a[temp2]);
			lo[x]=temp1,lo[y]=temp2;
		}
		else{
			int k=lo[x];
			if(y==
			
			
			1){
				if(lo[x]==1){
					printf("NULL\n");
				}
				else printf("%d\n",a[lo[x]-1]);
			}
			else{
				if(lo[x]==n){
					printf("NULL\n");
				}
				else printf("%d\n",a[lo[x]+1]);
			}
		}
	}
}
