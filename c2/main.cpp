#include <bits/stdc++.h>

using namespace std;

int main()
{
    signed int x,y,z,a;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        a=x+y+z;
        cout<<"Case "<<i<<": Sum of "<<x<<", "<<y<<" and "<<z<<" is "<<a<<endl;
    }
    return 0;
}
