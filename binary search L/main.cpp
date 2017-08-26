#include <bits/stdc++.h>

using namespace std;
 double x,y,c;
double f(double n)
{
    double a,b;
    a=sqrt(pow(x,2)-pow(n,2));
    b=sqrt(pow(y,2)-pow(n,2));
    return (a*b)/(a+b);
}

int main()
{
    int t;

    cin>>t;
    if(t>10) return 0;
    else
    {
        int k=1;
        while(t--)
        {

            cin>>x>>y>>c;
            double hi=min(x,y);
            double mid,lo=0.0;
                int x=100;
                while(x--)
                {

                    mid=(lo+hi)/2.0;
                    if(f(mid)<=c)
                    {
                        hi=mid;
                    }
                    else
                    {
                        lo=mid;
                    }
                }
                cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<lo<<endl;
                k++;
            }
    }
    return 0;
}
