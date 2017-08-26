#include <bits/stdc++.h>
#include<cmath>
#define pi acos(-1.0)

using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        double r1,r2,h,p;
        cin>>r1>>r2>>h>>p;
        double x,r,q,v;
        //x=(p*(r1-r2)/h);
        //r=r2+x;
        //q=(p*r2)/x;
        r=(r1-r2) / h * (r2*h / (r1-r2) + p);
        //v=((pi*r*r*(p+q))-(pi*r2*r2*q))/3.0;
        v=pi*p*(r2 * r2 + r2* r + r*r)/3.0;
        printf("Case %d: %.10lf\n",i,v+(1e-9));
    i++;

    }
    return 0;
}
