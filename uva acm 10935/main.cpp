#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, k, n, prev[64], next[64];
    while (cin>>n && n>0)
    {
        for (i = 1; i <= n; i++) next[i] = i + 1;
        next[n] = 1;
        for (i = 1; i <= n; i++) prev[i] = i - 1;
        prev[1] = n;
        printf("Discarded cards:");
        for (i = 1, k = 0; n > 1; n--)
        {
            if(k>0) cout<<", "<<i;
            else cout<<" "<<i;
            next[prev[i]] = next[i];
            prev[next[i]] = prev[i];
            i = next[next[i]];
            k++;
        }
        printf("\nRemaining card: %d\n", i);
    }
    return 0;
}
