#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
string str;
int main()
{
    cin>>str;

    long long ans=0;
    long long  cnt=0;
    for(long long i=str.size()-1; i>=0; i--)
    {
        if(str[i]=='b')
        {
            cnt++;

        }

        else if(str[i]=='a')
        {
            ans+= (cnt)%mod;
            ans= ans%mod;
            cnt= (2*cnt)%mod;
        }
    }

    cout<<ans<<endl;
    return 0;
}
