#include <bits/stdc++.h>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;
int a[100001];
long long dp[100001];




int main()
{
    int n,x,i,l=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x]++;
        l=max(l,x);
    }
    dp[0]=0;
    dp[1]=a[1];
    for(i=2;i<=l;i++)
        dp[i]=max(dp[i-1],dp[i-2]+(long long)a[i]*i);
        cout<<dp[l]<<endl;
    return 0;
}
