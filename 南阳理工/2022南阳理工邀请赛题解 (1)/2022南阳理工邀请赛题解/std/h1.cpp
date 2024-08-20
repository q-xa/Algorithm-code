#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
typedef long long int LL ;
const int N = 1e6 + 10 , M = 1e7 + 10;
LL prime[N];//存范围内的质数。
bool st[M];//判断当前点是否为合数（不是质数）
int cnt = 0 ;//记录有多少个质数。
struct node 
{
    LL now;//存取当前这个节点的值。
    LL mi; //存取当前枚举到的质数的幂次。
    LL ans;//存取当前结点除去（枚举到当前的质数）的约数个数。
    int ncnt;//存取枚举到的哪个质数的下标。
    bool f;//判断当前点的结果是否可以被加上。
};
void init()//线性晒将质数拿出来。
{
    for(int i = 2; i <= 10000000 ; i ++)
    {
        if(!st[i])prime[cnt++] = i;//取出质数。
        for(int j = 0 ; prime[j] <= 10000000/i; j ++)
        {
            st[prime[j] * i] = true;
            if(i % prime[j] == 0)break;
        }
    }
}

queue <node> q;
LL find(int n)//记录1到n的答案。
{
    if(n == 1)return 1;//如果n等于1就直接返回1。
    else if(n == 0)return 0 ;//如果为0则没有意义。
    LL ans = 0 ;//记录1到n的答案。
    //bfs的源点状态是（当前结点的值为1,对应下标的质数幂次是0,现在有1个约数，对应质数下标为0，可以被记入答案）
    q.push({1,0,1,0,1});
    while(q.size())
    {
        auto t = q.front();//取出队头。
        q.pop();
        if(t.f )ans += t.ans * (t.mi+1);//如果说当前结点可以被记入答案这就加上。
        //如果说当前枚举到的质数的幂+1对应的数在范围内就压入队列。
        //因为是平方所以幂次要加上2.
        if(t.now * prime[t.ncnt] <= n)
        q.push({t.now*prime[t.ncnt] ,t.mi+2, t.ans ,t.ncnt, 1});
        
        //如果说当前枚举到的质数不是最后一个，并且当前结点的值乘以下一个质数的值还在范围内就压入队列。
        //因为压入的值的 now是不变的，所以这个压入的节点不能算在答案内。
        if(t.ncnt + 1 < cnt  && t.now * prime[t.ncnt+1] <= n)
        q.push({t.now,0ll,t.ans * (t.mi+1),t.ncnt+1,0});
    }
    return ans;
}
int main()
{
    LL n , m;
    init();
    cin >> n >> m ;
    //最后输出就是去先算出来1~r区间的约数的个数，再减去1到l-1区间的个数。
    cout << find(m) - find(n-1)<<endl;
}

