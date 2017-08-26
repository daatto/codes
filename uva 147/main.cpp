#include <bits/stdc++.h>

using namespace std;
#define MAX 30001
int coins[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
string num;
unsigned long long int dp[MAX];
int main()
{
   memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i = 0; i < 11; i++)
    {
        for(int j = coins[i] ; j <= MAX; j++)
            dp[j] += dp[ j - coins[i] ];
    }
    int n , i , j;
    while(cin>>num)
    {
        int k;
        i=0;j=0;
        for(k=0;k<num.size();k++)
        {
            if(num[k]=='.') break;
        }
        int m=0;
        for(int l=k-1;l>=0;l--)
        {
            int x=num[l]-48;
            i+=x*pow(10,m);
            m++;
        }
         m=0;
        for(int l=num.size()-1;l>k;l--)
        {
            int x=num[l]-48;
            j+=x*pow(10,m);
            m++;
        }

        if(i==0&& j==0)break;
        n= i*100 + j;
        printf("%3d.%.2d%17llu\n",i,j,dp[n]);
    }
    return 0;
}
