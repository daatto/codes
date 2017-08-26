#include <bits/stdc++.h>

using namespace std;
inline vlong gcd( vlong a, vlong b)
{

    a=ABS(a);
    b=ABS(b);
    while(b) {
        a=a%b; swap(a,b);
    }

    return a;

}
inline vlong lcm(vlong a, vlong b){

a=ABS(a);
b=ABS(b);
return (a/gcd(a,b))*b;

}

int main()
{
    long long n,m;

    cin>>n>>m;
    cout<<gcd(n,m)<<lcm(n,m);
    return 0;
}
