#include<bits/stdc++.h>
using namespace std;
#define int long long 
//vector<int> ce(int n){
//	vector<int>A(100000000,0);
////	A.push_back(2);
//	A[0]=2;
//	for(int i=1;i<n;i++){
//		int u;
//		u=A.size();	
//		for(int j=0;j<u;j++){
//			A[j+1]+=A[j]/10;
//			A[j]=A[j]%10;
//			A[j]=A[j]*2;
////			cout<<A[j]<<" ";
//		}
//	}
////	cout<<endl;
//	int c;
////	c=A.size();
////	for(int i=0;i+1<c;i++){
////		A[i+1]+=A[i]/10;
////		A[i]=A[i]%10;
//////		cout<<A[i];
////	}
//	while(A.size()>1&&A.back()==0){
//		A.pop_back();
//	}
//	c=A.size();
//	for(int i=c-1;i>=0;i--){
//		cout<<A[i];
//	}
//	return A;
//}
vector<int> jia(int n,vector<int> &b){

	for(int i=0;i<n;i++){
		int i1=0,j1;
		j1=b.size();
		for(int j=0;j<j1;j++){
			b[j]=b[j]*2+i1;
			if(b[j]>=10){
				i1=b[j]/10;
				b[j]=b[j]%10;
			}
			else{
				i1=0;
			}
		}
		if(i1!=0){
			b.push_back(i1);
		}
	}
	return b;
}
signed main(){
    vector<int>b;
	int n;
	string s;
	cin>>n;
	cin>>s;
	int k,su=0,p=0;
	k=s.size();
	for(int i=k-1;i>=0;i--){
		if(s[i]=='.'){
			su=p;
		}
		else{
			b.push_back(s[i]-'0');
		}
		p++;
	}
	
	vector<int> B=jia(n,b);
	int i1,t=0;
	i1=B.size();
	for(int i=su;i<i1;i++){
		if(B[i-1]>=5){
			B[i]+=1;
			if(B[i]>=10){
				t=B[i]/10;
				B[i]%=10;
			}
			else{
				break;
			}
		}
		else{
			break;
		}
		if(i>su){
			B[i]+=t;
			if(B[i]>=10){
				t=B[i]/10;
				B[i]%=10;
			}
			else{
				t=0;
			}
		}
	}
	if(t!=0){
		B.push_back(t);
	}
	i1=B.size();
	for(int i=i1-1;i>=0;i--){
		if(i>=su){
			cout<<B[i];
		}
	}	
    return 0;
 }
