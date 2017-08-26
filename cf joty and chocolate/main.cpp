#include <bits/stdc++.h>

using namespace std;
long long lcm(long long a, long long b)
{
    return ((a*b)/__gcd(a,b));
}

int main()
{
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    if(p>q)
    {
        cout<<((n/a)*p + (n/b)*q)- (n/lcm(a,b))*q <<endl;
    }
    else if(q>=p)
    {
        cout<<((n/b)*q + (n/a)*p) - (n/lcm(a,b))*p <<endl;
    }
    return 0;
}
