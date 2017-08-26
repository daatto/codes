#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;

    int a[1000];
    int b[1000];
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,m;
        long long c=0;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<m; j++)
        {
            cin>>b[j];
        }
        for(int p=0;p<m+n-1;p++){
        if(a[p]<=b[p])
        {
            c=c+a[p];
            a[p+1]=a[p];
        }
        else
        {
            c=c+b[p];
            b[p+1]=b[p];
        }
        }
        cout<<c<<endl;
    }
    return 0;
}
