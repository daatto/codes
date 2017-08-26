#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int k,n;
        cin>>k>>n;
        if(k==0)
        {
            int p=n/3;
            int o=2*n/9;
            int r=2*2*n/9;
            cout<<"Case "<<i<<":"<<endl;
            cout<<p<<endl;
            cout<<r<<endl;
            cout<<o<<endl;

        }
        else if(k==1)
        {
            cout<<"Case "<<i<<":"<<endl;
            cout<<3*n/2<<endl;
            cout<<2*n<<endl;
            cout<<9*n/2<<endl;
        }
    }

    return 0;
}
