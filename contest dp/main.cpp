#include<bits/stdc++.h>

using namespace std;
long long dp[1000000];


long long a, b, c, d, e, f;
long long fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1)
        return dp[n];
        else{
    dp[n]=( fn(n-1)%10000007+ fn(n-2)%10000007+ fn(n-3)%10000007+ fn(n-4)%10000007 + fn(n-5)%10000007+ fn(n-6)%10000007)%10000007 ;
        }
return dp[n]%10000007;
}
int main() {
    int n, caseno = 0, cases;

    scanf("%d", &cases);
    while( cases-- ) {
            memset(dp,-1,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        long long num=fn(n);
        num=num%10000007;
        printf("Case %d: %d\n", ++caseno, num);
    }
    return 0;
}
