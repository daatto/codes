#include<bits/stdc++.h>

using namespace std;
int dp[100][100];
int ncr(int n, int r){
              if(n==1||n==r)
                return 1;
                if(dp[n][r]!=-1)
                    return dp[n][r];
                return dp[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
              }

int main()
{
    int n,r;
    memset(dp,-1,sizeof(dp));
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}
