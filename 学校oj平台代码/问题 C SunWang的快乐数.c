#include<stdio.h>
int main()
{
    long long n,a,b,c,d,e,i;
    int f;
    f=0,d=0;
    scanf("%lld",&n); 
    for(i=1;i<=n;i++)//ѭ������������1-n������в��Կ��Ƿ��������� 
    {
        a=0,b=0,c=i;//��ʼ�� 
        while(c)//������е���λ��
        {
            a=c%10;
            c=c/10;
            b=b+a;
        }
        e=i;
        while(e) 
        {
            a=e%10;//���ÿ��λ���Ƕ��� 
            e=e/10;
            if(a==6&&b%6==0)//�������������ж� 
            {
                f++;//������������������ͳ�� 
                d=i;//
                break;//�жϳ�������ѭ�� 
            }
        }
    }
    printf("%d %lld\n",f,d);
    
    return 0;
}

