#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    long long n,a=1000000000,b=1000000000,c=0,d=0;
    vector<long long>v,vv;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        if(y<a) a=y;
        if(x>c) c=x;
        //v.push_back(y);

    }
    long long m;
    cin>>m;
    for(long long i=0;i<m;i++)
    {
        long long x,y;
        cin>>x>>y;
        //vv.push_back(x);
        if(x>d) d=x;
        if(y<b) b=y;
    }
    //sort(v.begin(),v.end());
    //sort(vv.begin(),vv.end());
    long long j,k;
    j=c-b;
    k=d-a;
    if(j>k && j>0)
    cout<<j<<endl;
    else if(k>0) cout<<k<<endl;
     else
        cout<<0<<endl;
    return 0;
}
