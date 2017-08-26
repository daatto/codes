#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  t;

    cin>>t;
    while(t--)
    {
        long long n,i;
        cin>>n;
        if(n>=0){
        for( i=0;i<=n;i++)
        {
            if(i<n) cout<<i<<" ";
            else cout<<i<<endl;
        }
        }
        else
        {
            for(i=n;i<=0;i++)
            {
                if(i<0) cout<<i<<" ";
                else cout<<i<<endl;
            }
        }
    }
    return 0;
}
