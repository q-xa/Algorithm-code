
//next_permutation(a,a+8)
/*����STL�ĵ���������next_permutation����������ĸ��˳�����ɸ������е���һ���ϴ�����У�ֱ����������Ϊ����Ϊֹ��prev_permutation������֮�෴�������ɸ������е���һ����С�����С�

����һ����һ���������һ�����еĺ��������Ա���ȫ����,Ҫ����ͷ�ļ�<algorithm>

ʹ�÷�����next_permutation(����ͷ��ַ������β��ַ);����һ�����д��ڣ��򷵻��棬����������򷵻ؼ�

������һ�����У�����prev_permutation
��������������������������������
��Ȩ����������ΪCSDN��������������ԭ�����£���ѭCC 4.0 BY-SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https://blog.csdn.net/sgsyacm/article/details/80139089*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	int a[8]={1,2,3,4,5,6,7,8};
    do
    {
    	for(i=0;i<8;i++)
    	{
    		if(i==7)
    		cout<<a[i];
    		else
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;	
    }
    while(next_permutation(a,a+8));
	return 0;
}
