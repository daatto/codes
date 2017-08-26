#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        long long p,q,x,y;
        cin>>p>>q>>x>>y;
         double m=p/q,n=x/y;
        cout<<m<<n;
        if(x==y && p!=q) cout<<-1<<endl;

        else if(m == n) cout<<0<<endl;
        else
        {
            long long a=p*y;
            long long b=q*x;
            long long c=abs(a-b);
            if((p+c)/(q+c)==n) cout<<c<<endl;
            else
            {

            }

            //cout<<c*y-q<<endl;

        }
    }
    return 0;
}
//balta hoise
