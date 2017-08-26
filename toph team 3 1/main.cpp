#include<bits/stdc++.h>

using namespace std;
unsigned long long dp[100000000];
long long fn( int n ) {
    if( n == 1 ) return 1;
    if( n == 2 ) return 1;
    if(dp[n]!=-1)
        return dp[n];
        else{
    dp[n]=( fn(n-1)%1000000000+ fn(n-2)%1000000000)%1000000000 ;
        }
return dp[n]%1000000000;
}
int main() {
    int n, caseno = 0, cases;

    scanf("%d", &cases);
    while( cases-- ) {
            memset(dp,-1,sizeof(dp));
            long long x;
        scanf("%d", &x);
        long long num=fn(x);
        num=num%1000000000;
        printf("%d\n", num);

    }
    return 0;
}
