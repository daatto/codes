#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    long long l=0;
    char x;
    if(k%2==0) x='R';
    else x='L';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            l+=2;
            if(k==l || k==l-1) {cout<<i<<" "<<j<<" "<<x<<endl; break;}
        }
    }
    return 0;
}
