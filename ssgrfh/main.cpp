#include <bits/stdc++.h>
#include<cmath>

using namespace std;
int f(int x,int y)
{
    int a,b,d,e;
    double c=0.0;
    a=floor(log(x-2));
    for(int i=0;i<=a+1;i++)
    {
        b=pow(2,i);
        d=floor(x/b);
        e=floor(y/b);
        c+=b*(((d%2)+(e%2))%2);
    }
    return c;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<f(x,y)<<endl;
}
