class Solution {
public:
    long long legalExp(string str) {
        // write code here
stack<long long>a;
long long b=0;
long long shu1,shu2;
for(int i=0;i<str.size();i++)
{
	if(str[i]>='0'&&str[i]<='9')
	{
		b=b*10+str[i]-'0';
	}
	else if(str[i]=='#')
	{
		a.push(b);
		b=0;
	}
	else
	{
		shu2=a.top();
		a.pop();
		shu1=a.top();
		a.pop();
		if(str[i]=='+')
		{
			a.push(shu1+shu2);
		}
		if(str[i]=='-')
		{
			a.push(shu1-shu2);
		}
		if(str[i]=='*')
		{
			a.push(shu1*shu2);
		}
	}
}
return a.top();
    }
};
