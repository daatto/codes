#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t = 0,a[10001], x;
    while(cin>>n>>m) {
        if(n==0 && m==0)
            break;
        int cnt[10001] = {}, sum[10001], l = 0, i;
        while(n--) {
            cin>>x;
            cnt[x]++;
            if(x > l)
                l = x;
        }
        sum[0] = 0;
        for(i = 1; i <= l; i++)
            sum[i] = sum[i-1]+cnt[i-1];
            for(int j=0;j<m;j++)
            {
                cin>>a[j];
            }
        printf("CASE# %d:\n", ++t);

        for(int j=0;j<m;j++) {
            x=a[j];
            if(!cnt[x])
                printf("%d not found\n",x);
            else {
                printf("%d found at %d\n",x,sum[x]+1);
            }
        }
    }
    return 0;
}
