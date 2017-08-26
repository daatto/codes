#include <bits/stdc++.h>

using namespace std;
long long dp[10000];
long long fn(long long n){
if(n==0||n==1)
    return 1;
if(dp[n]!=-1)
    return dp[n];
return dp[n]=(fn(n-1)+fn(n-2));



}


int main()
{
    long long n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fn(n);
    return 0;
}
