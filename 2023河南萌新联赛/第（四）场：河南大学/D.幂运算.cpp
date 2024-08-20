#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAX=1000100;
char* itoa(int num,char* str,int radix)
{
	char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";//������
	unsigned unum;//���Ҫת���������ľ���ֵ,ת�������������Ǹ���
	int i=0,j,k;//i����ָʾ�����ַ�����Ӧλ��ת��֮��i��ʵ�����ַ����ĳ��ȣ�ת����˳��������ģ��������������k����ָʾ����˳��Ŀ�ʼλ��;j����ָʾ����˳��ʱ�Ľ�����
 
	//��ȡҪת���������ľ���ֵ
	if(radix==10&&num<0)//Ҫת����ʮ�����������Ǹ���
	{
		unum=(unsigned)-num;//��num�ľ���ֵ����unum
		str[i++]='-';//���ַ�����ǰ������Ϊ'-'�ţ�����������1
	}
	else unum=(unsigned)num;//����numΪ����ֱ�Ӹ�ֵ��unum
 
	//ת�����֣�ע��ת�����������
	do
	{
		str[i++]=index[unum%(unsigned)radix];//ȡunum�����һλ��������Ϊstr��Ӧλ��ָʾ������1
		unum/=radix;//unumȥ�����һλ
 
	}while(unum);//ֱ��unumΪ0�˳�ѭ��
 
	str[i]='\0';//���ַ���������'\0'�ַ���c�����ַ�����'\0'������
 
	//��˳���������
	if(str[0]=='-') k=1;//����Ǹ��������Ų��õ������ӷ��ź��濪ʼ����
	else k=0;//���Ǹ�����ȫ����Ҫ����
 
	char temp;//��ʱ��������������ֵʱ�õ�
	for(j=k;j<=(i-1)/2;j++)//ͷβһһ�Գƽ�����i��ʵ�����ַ����ĳ��ȣ��������ֵ�ȳ�����1
	{
		temp=str[j];//ͷ����ֵ����ʱ����
		str[j]=str[i-1+k-j];//β����ֵ��ͷ��
		str[i-1+k-j]=temp;//����ʱ������ֵ(��ʵ����֮ǰ��ͷ��ֵ)����β��
	}
 
	return str;//����ת������ַ���
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
 
//���ݺ���
LL eulerDropPow(LL a,char b[],LL c)
{
    LL eulerNumbers=Euler(c);
    //�洢����֮�����
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
