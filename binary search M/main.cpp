#include <bits/stdc++.h>

using namespace std;

int main()
{

        long long k;
        int l,u,ans=0;
        cin>>k;
        string s;
        int cum[100000],a[100000];
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            a[i]=s[i]-48;
        }
        cum[0]=0;
        for(int i=1;i<=s.size();i++)
        {
            cum[i]=cum[i-1]+a[i-1];
        }
        for(int i=1;i<=s.size();i++)
        {
            u=upper_bound(cum,cum+s.size(),i)-cum;
            l=lower_bound(cum,cum+s.size(),i)-cum;
            if(u>0 && l>0)
            {
                ans+=(u-l+1);
            }
        }
        cout<<ans<<endl;
    return 0;
}
