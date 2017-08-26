#include <bits/stdc++.h>
#include<cmath>

using namespace std;
int f(int x,int y)
{
    int a,b,d,e;
    double c=0.0;
    a=floor(log(max(x,y)-2));
    for(int i=0;i<=a+1;i++)
    {
        b=pow(2,i);
        d=floor(x/b);
        e=floor(y/b);
        c+=b*(((d%2)+(e%2))%2);
    }
    return floor(c);
}

int main()
{
    int a[100001];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cn=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(f(i,j)==x) cn++;
        }
    }
    cout<<cn<<endl;
}
