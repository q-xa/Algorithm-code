#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10][10];
	while(n--){
		map<int,int>mp;
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		int k=0;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cin>>a[i][j];
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"1 "<<a[i][j]<<endl;
				}
			}
		    for(int i=1;i<10;i++){
			    mp[i]=0;
		    }			
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				if(a[j][i]<10&&a[j][i]>0&&mp[a[j][i]]==0){
					mp[a[j][i]]++;
				}
				else{
					k=1;
//					cout<<"2 "<<a[j][i]<<endl;
				}
			}
		    for(int i=1;i<10;i++){
			    mp[i]=0;
		    }			
		}//1-3
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"1-1 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=0;i<3;i++){
			for(int j=3;j<6;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"1-2 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=0;i<3;i++){
			for(int j=6;j<9;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"1-3 "<<a[i][j]<<endl;
				}
			}	
		}//4-6
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=3;i<6;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"2-1 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=3;i<6;i++){
			for(int j=3;j<6;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"2-2 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=3;i<6;i++){
			for(int j=6;j<9;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"2-3 "<<a[i][j]<<endl;
				}
			}	
		}//7-9
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=6;i<9;i++){
			for(int j=0;j<3;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"3-1 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=6;i<9;i++){
			for(int j=3;j<6;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"3-2 "<<a[i][j]<<endl;
				}
			}	
		}
		for(int i=1;i<10;i++){
			mp[i]=0;
		}
		for(int i=6;i<9;i++){
			for(int j=6;j<9;j++){
				if(a[i][j]<10&&a[i][j]>0&&mp[a[i][j]]==0){
					mp[a[i][j]]++;
				}
				else{
					k=1;
//					cout<<"3-3 "<<a[i][j]<<endl;
				}
			}	
		}
		if(k==0){
			cout<<"1"<<endl;
		}	
		else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
