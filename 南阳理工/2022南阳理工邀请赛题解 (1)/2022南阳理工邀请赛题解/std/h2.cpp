#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>
const int maxn = 1e7 + 7; //总的范围规定在这里
using namespace std;
typedef long long int LL;
const int N = 1e7 + 7;
//我们将这个埃氏筛法写成一个函数
bool isprime[maxn]; //判断质数用。
void sieve()
{
    for (int i = 0; i <= maxn; i++)
        isprime[i] = true;
 
    for (int i = 2; i <= maxn; i++)
    { //从2开始往后筛
        if (isprime[i])
        {
            for (int j = 2 * i; j <= maxn; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}
LL n;
LL su[10000000];//用来存质数。
LL ans = 0;//记录当前1~n的范围内平方的约数个数。
LL cnt = 0;//记录有多少个质数。
struct node
{
    LL step, now, res, mi;
    //step表示的是当前遍历到的质数对应su的下标
    //now表示是当前节点的值是多少，
    //res表示的是出去当前遍历到的质数，其余的数组成的约数的个数
    //mi是当前遍历到的质数对应的幂次，
    bool f;//f是是否可以被记入答案。
} p[N];
int top;
void dfs(int step, LL now, LL res, int mi, bool f)
{
    if(n <= 1)
    {
        ans = n ;
        return ;
    }
    p[++top] = {step, now, res, mi, f};
    while (top > 0)
    {
        //因为懒所以这样写。
        auto t = p[top --];
        step = t.step;
        now  = t.now ;
        res  = t.res;
        mi   = t.mi;
        f    = t.f;

        if (f)
            ans = ans + (res * (mi + 1) ) ;//如果能被记入就直接记入答案。
 
        //如果当前遍历到的幂次+1之后对应的值还在范围内就压入栈。
        if (now * su[step] <= n)
        p[++top] = {step, now * su[step], res, mi + 2, 1};//因为是求平方的约数个数，所以这里幂次是加二。
        
        //如果说当前枚举到的质数不是最后一个，并且当前结点的值乘以下一个质数的值还在范围内就压入栈。
        //因为压入的值的 now是不变的，所以这个压入的节点不能算在答案内。
        if (step < cnt - 1 && now * su[step + 1] <= n)
            p[++top] = {step + 1, now, res * (mi + 1) , 0, 0};
    }
}
int main()
{
    sieve(); //预处理
    cin >> n;
    //先找出来所有所有质数。
    for (int i = 2; i <= 10000000; i++)
    {
        if (isprime[i])
        {
            su[cnt++] = i;//记录下来质数。
        }
    }
    n -- ;
    //找出1~（l-1)内的约数个数。
    //初始状态：对应遍历到的质数下标为0，当前结点值为1，除去当前质数有1个约数，当前质数的mi是0，可以被加入答案）。
    dfs(0, 1, 1, 0, 1);
    LL temp = ans;//记录下来。
    ans = 0 ;
    cin >> n ;
    ans = 0 ;
    //找到1~r范围内的约数个数。
    dfs(0,1,1,0,1);
    //相减就好了。
    cout << ans - temp<< endl;
}