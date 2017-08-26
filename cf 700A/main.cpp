#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l,v1,v2,k;
    double a,b,c,d,ans;
    cin>>n>>l>>v1>>v2>>k;
    if (k>=n)
    {
        ans = l / v2;
        printf("%.12f\n", ans+1e-10);
    }
    else
    {
        a= (n + k - 1) / k;
        b = 1.0 * a;
        c = (b - 1) * 2.0 * v1 / (v1 + v2) + 1.0;
        d = l / c;
        ans = d / v2 + (l - d) / v1;
        printf("%.12f\n", ans+1e-10);
    }

    return 0;
}
