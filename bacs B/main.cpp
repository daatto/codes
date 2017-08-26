#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    int z=1;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        vector<unsigned long long>v;
        v.push_back(0);
        for(int i=0;i<n;i++)
        {
            unsigned long long x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Case "<<z<<":"<<endl;
        z++;
        int l,r;
        long long x;
        while(q--)
        {
            int a,b,c;
            long long d;
            cin>>a>>b>>c>>d;
            if(a==1)
            {
                l=b;
                r=c;
                x=d;
                for(int i=l;i<=r;i++)
                {
                    v[i]=v[i]+x;
                }
            }
            else if(a==2)
            {
                l=b;
                r=c;
                x=d;
                unsigned long long q=0;
                int w=0;
                for(int i=l;i<=r;i++)
                {
                    q+=((1+(w*x))*v[i])%1000000007;
                    q=q%1000000007;
                    w++;
                }
                cout<<q%1000000007<<endl;
            }
        }
    }

    return 0;
}
