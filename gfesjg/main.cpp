#include <bits/stdc++.h>

using namespace std;
int dp[1000];

int fn(int n)
{

   if(n==1||n==2) return 1;
   if(dp[n]!=-1) return dp[n];
   return dp[n]=fn(n-1)+fn(n-2);



}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;

    cin>>n;
    cout<<fn(n);
    return 0;
}
