#include <iostream>

using namespace std;
int dp[10000][10000];
int n;
int rec(int i, int w){
if(w<0)
    return -inf;
if(i>=n)
    return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    return dp[i][w]=max(profit[i]+rec(i+1,w-weight[i]),rec(i+1,w));




}

int main()
{
    //cout << "Hello world!" << endl;
    return 0;
}
