#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,r,s,t;
    cin>>n;
    r=n-s;
    t=(s*s-2*s*n+n*n)/2*s;
    n=sqrt((r+t+s)*(r+t+s)-(r+t)*(r+t));
    cout<<r+t<<r+s+t;
    return 0;
}
