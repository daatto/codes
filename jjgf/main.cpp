#include <bits/stdc++.h>

using namespace std;
long long dp[100000000];
long long fn(long long n){
if(n==1||n==2) return 1;
if(dp[n]!=-1) return dp[n];
return dp[n]=fn(n-1)+fn(n-2);




}

int main()
{
    //cout << "Hello world!" << endl;
    long long n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n){
    cout<<fn(n)<<endl;
    }
    return 0;
}
