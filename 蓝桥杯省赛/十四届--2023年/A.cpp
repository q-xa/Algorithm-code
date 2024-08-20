#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[104];
	for(int i=0;i<100;i++){
		cin>>a[i];
	}
	int he=0,i=0;
	int b[8]={2,0,2,3,0,1,0,1};
		i=0;
		for(int k=1;k<=12;k++){
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12){
				b[4]=0;
				b[5]=k;
				if(k==10){
					b[4]=1;
					b[5]=0;
				}
				if(k==12){
					b[4]=1;
					b[5]=2;
				}
				for(int o=0;o<=3;o++){
					b[6]=o;
					for(int u=0;u<=9;u++){
						b[7]=u;
						if((o*10+u)<=31&&(o*10+u)>0){
							i=0;
							for(int j=0;j<100;j++){
								if(b[i]==a[j]){
									i++;
									if(i==8){
										he++;
										break;
									}
								}
							}
						}
					}
				}
			}
			if(k==4||k==6||k==9||k==11){
				b[4]=0;
				b[5]=k;
				if(k==11){
					b[4]=1;
					b[5]=1;
				}
				for(int o=0;o<=3;o++){
					b[6]=o;
					for(int u=0;u<=9;u++){
						b[7]=u;
						if((o*10+u)<=30&&(o*10+u)>0){
							i=0;
							for(int j=0;j<100;j++){
								if(b[i]==a[j]){
									i++;
									if(i==8){
										he++;
										break;
									}
								}
							}
						}
					}
				}
			}
			if(k==2){
				b[4]=0;
				b[5]=2;
				for(int o=0;o<=2;o++){
					b[6]=o;
					for(int u=0;u<=9;u++){
						b[7]=u;
						if((o*10+u)<=28&&(o*10+u)>0){
							i=0;
							for(int j=0;j<100;j++){
								if(b[i]==a[j]){
									i++;
									if(i==8){
										he++;
										break;
									}
								}
							}
						}
					}
				}
			}

		}
	cout<<he;

	return 0;
}
