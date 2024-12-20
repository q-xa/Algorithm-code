#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAX=1000100;
char* itoa(int num,char* str,int radix)
{
	char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//索引表
	unsigned unum;//存放要转换的整数的绝对值,转换的整数可能是负数
	int i=0,j,k;//i用来指示设置字符串相应位，转换之后i其实就是字符串的长度；转换后顺序是逆序的，有正负的情况，k用来指示调整顺序的开始位置;j用来指示调整顺序时的交换。
 
	//获取要转换的整数的绝对值
	if(radix==10&&num<0)//要转换成十进制数并且是负数
	{
		unum=(unsigned)-num;//将num的绝对值赋给unum
		str[i++]='-';//在字符串最前面设置为'-'号，并且索引加1
	}
	else unum=(unsigned)num;//若是num为正，直接赋值给unum
 
	//转换部分，注意转换后是逆序的
	do
	{
		str[i++]=index[unum%(unsigned)radix];//取unum的最后一位，并设置为str对应位，指示索引加1
		unum/=radix;//unum去掉最后一位
 
	}while(unum);//直至unum为0退出循环
 
	str[i]='\0';//在字符串最后添加'\0'字符，c语言字符串以'\0'结束。
 
	//将顺序调整过来
	if(str[0]=='-') k=1;//如果是负数，符号不用调整，从符号后面开始调整
	else k=0;//不是负数，全部都要调整
 
	char temp;//临时变量，交换两个值时用到
	for(j=k;j<=(i-1)/2;j++)//头尾一一对称交换，i其实就是字符串的长度，索引最大值比长度少1
	{
		temp=str[j];//头部赋值给临时变量
		str[j]=str[i-1+k-j];//尾部赋值给头部
		str[i-1+k-j]=temp;//将临时变量的值(其实就是之前的头部值)赋给尾部
	}
 
	return str;//返回转换后的字符串
}
LL qsm(LL a,LL b,LL mod)          //(a^b)%mod
{
    LL res=1;
    while(b>0)
    {
        if(b&1)
            res=(res%mod*a%mod)%mod;
        b>>=1;
        a=(a%mod*a%mod)%mod;
    }
    return res;
}
 
LL Euler(LL n)
{
    LL ans=1;
	for(int i=2;i*i<=n;i++)
    {
		if(n%i==0)
		{
			n/=i;
			ans*=(i-1);
			while(n%i==0)
			{
				n/=i;
				ans*=i;
			}
		}
	}
	if(n>1)
	  ans*=(n-1);
	return ans ;
}
 
//降幂函数
LL eulerDropPow(LL a,char b[],LL c)
{
    LL eulerNumbers=Euler(c);
    //存储降了之后的幂
    LL descendingPower=0;
    for(LL i=0,len=strlen(b);i<len;++i)
    {
        descendingPower=(descendingPower*10+b[i]-'0')%eulerNumbers;
    }
    descendingPower += eulerNumbers;
    return qsm(a,descendingPower,c);
}
int main() 
{
    LL a=2,c,d,e;
    char b[MAX]={0};
    char o[MAX]={0};
	cin>>d>>c;
	itoa(d,o,10);
    e=eulerDropPow(a,o,c);
    itoa(e,b,10);
    printf("%lld\n",eulerDropPow(a,b,c));
    return 0;
}
