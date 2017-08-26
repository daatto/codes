#include <bits/stdc++.h>
using namespace std;

#define MAX 10001
int coins[21];
char num[15];
unsigned long long int dp[MAX];

int main()
{
    for(int i=0;i<21;i++)
    {
        coins[i]=pow(i+1,3);
    }
    int i,j,n;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=0;i<21;i++)
    {
        for(j=coins[i];j<=MAX;j++)
                dp[j]+=dp[j-coins[i]];
    }
    while(cin>>n)
    {

        cout<<dp[n]<<endl;
    }
    return 0;
}

