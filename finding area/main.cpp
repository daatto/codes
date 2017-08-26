#include <bits/stdc++.h>
#include <cmath>
#define pi acos(-1)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        cout<<fixed<<setprecision(2)<<n*n-pi*(n/2)*(n/2)<<endl;

    }
    return 0;
}
