#include <bits/stdc++.h>

using namespace std;
long long dp[10000][10000];
long long  coins[101];
int main()
{
    int n;
    cin>>n;
    vector<long long int>v;
    while(n--)
    {
        memset(dp,0,sizeof(dp));
        int m;
        cin>>m;
        int total=0;

    for (int i = 0; i < m; i++) {
      cin >> coins[i];
      total += coins[i];
    }


    int target = total / 2;

    for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= target; j++) {
        if (coins[i-1] > j) {
          dp[i][j] = dp[i-1][j];
          continue;
        }

        dp[i][j] = max(dp[i-1][j], dp[i-1][j-coins[i-1]] + coins[i-1]);
      }
    }

    v.push_back( total - dp[m][target] * 2);
  }
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<endl;
  }
    }
