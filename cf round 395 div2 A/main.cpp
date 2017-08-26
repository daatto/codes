#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[200005];
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long x=n/2;
    for(long long i=1;i<=x;i++)
    {
        if(i%2!=0)
            swap(a[i],a[n-i+1]);
    }
    for(long long i=1;i<=n;i++)
    {
        if(i<n) cout<<a[i]<< " ";
        else
            cout<<a[i]<<endl;
    }

    return 0;
}
