#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t>25) return 0;
    else
    {
    int c=1;
    while(t--)
    {
        double ab,bc,ac,r;
        cin>>ab>>bc>>ac>>r;
        printf("Case %d: %.8lf\n", c, sqrt(r/(r+1.0))*ab + 1e-10);
        c++;
    }
    }
    return 0;
}
