#include <bits/stdc++.h>

using namespace std;
vector<long long >v;
long long f(long long i,long long j)
{
    long long z=0,q=0;
    for(long long k=j;k<=i-1;k++)
    {
        long long y=abs(v[k]-v[k+1]);
        long long x;
        x=pow(-1,(k-j));
        z+=x*y;
    }
    return z;
}
int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;

    vector<long long >vv;
    //map< long long,int>m;
    v.push_back(0);
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        //m[x]=i;
        v.push_back(x);
    }
    //vv=v;
    long long w=0,x=0;
    //sort(v.begin(),v.end());
    //memset(dp,-1,sizeof(dp));
    for(long long i=1;i<n;i++)
    {
        for(long long j=i+1;j<=n;j++ )
        {
            w=f(i,j);
            if(w>x) x=w;
        }
    }
    cout<<x<<endl;

    return 0;
}
//balsal hoy ni
