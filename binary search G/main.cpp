#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a[100005];
    cin>>t;
    if(t>10) return 0;
    int b=1;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int c,d,e(0);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                c=a[i]+a[j];
                d=lower_bound(a,a+n,c)-a;
                e+=max(0,d-j-1);
            }
        }
        cout<<"Case "<<b<<": "<<e<<endl;
        b++;

    }
    return 0;
}
