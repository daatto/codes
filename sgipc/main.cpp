#include <bits/stdc++.h>

using namespace std;
/*unsigned long long dp[10000][10000];
unsigned long long f(int n, int r)
{
    if(n==r) return 1;
    if(r==1) return n;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=f(n-1,r-1) + f(n-1,r);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        unsigned long long y,x=f(n-1,k-1);

       y=sqrt(x);
       if(x%2==1) {y=y+1;}
       cout<<y<<endl;
    }
    return 0;
}
*/
int coin[100000];
int dp[10000][10000];
int k,n;
int f(int i,int w)
{
    if(i==n)
    {
        if(w==k) return 1;
        else
            return 0;
    }
    if(dp[i][w]!=-1) return dp[i][w];
    if(w+coin[i]<=k)
    {
        dp[i][w]=f(i+1,w+coin[i]);
    }
    return dp[i][w]+=(f(i+1,w));
}
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        cin>>k>>n;
        cout<<f(k,n)<<endl;
    }







    return 0;
}
