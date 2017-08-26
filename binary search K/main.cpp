#include <bits/stdc++.h>
using namespace std;
int a[100005];
int sum[100005];
int n, m;
int f(int x)
{
    int l,h;
    l=1;h=n;
    while (l<h)
    {
        int mid=(l+h)/2;
        if (sum[mid]>=x)
           h=mid;
        else
            l=mid+1;
    }
    return l;
}
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        int q;
        cin>>q;
        cout<<f(q)<<endl;
    }
    return 0;
}
