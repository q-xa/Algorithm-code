#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s;
    cin>>s;
    if(s>=1&&s<=7)
    {
        cout<<"very easy";
    }
    else if(s>7&&s<=233)
    {
        cout<<"easy";
    }
    else if(s>233&&s<=10032)
    {
        cout<<"medium";
    }
    else if(s>10032&&s<=114514)
    {
        cout<<"hard";
    }
    else if(s>114514&&s<=1919810)
    {
        cout<<"very hard";
    }
    else
    {
        cout<<"can not imagine";
    }
    return 0;
}
