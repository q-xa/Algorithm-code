
//next_permutation(a,a+8)
/*按照STL文档的描述，next_permutation函数将按字母表顺序生成给定序列的下一个较大的排列，直到整个序列为降序为止。prev_permutation函数与之相反，是生成给定序列的上一个较小的排列。

这是一个求一个排序的下一个排列的函数，可以遍历全排列,要包含头文件<algorithm>

使用方法：next_permutation(数组头地址，数组尾地址);若下一个排列存在，则返回真，如果不存在则返回假

若求上一个排列，则用prev_permutation
————————————————
版权声明：本文为CSDN博主「沐妖」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/sgsyacm/article/details/80139089*/
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
