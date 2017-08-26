#include <bits/stdc++.h>
#include <cmath>


int main() {
    double e= 1e-9, pi = acos(-1.0), r, rs;
    int t,c = 1;
    scanf("%d",&t);
    while(t--) {
        scanf("%lf", &r); rs = r*r;
        printf("Case %d: %.2lf\n", c++, 4.0*rs - pi*rs + e);
    }
    return 0;
}
