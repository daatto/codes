#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,c=1;
    cin>>t;
    while(c<=t)
    {
        long long n;
        cin>>n;
        cout<<"Case "<<c++<<": ";

        for(long long i=1; i<=n; i++)
    {
        if(n%i==0)
        {
                    cout<<i<<" ";
        }
    }

    }
    return 0;
}
