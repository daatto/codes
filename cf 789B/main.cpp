#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    //cout << "Hello world!" << endl;
    ll b,q,l,m;
    vector<ll>v;
    cin>>b>>q>>l>>m;
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(b==v[0]) {cout<<0<<endl; return 0;}
    if(q==1) {cout<<"inf"<<endl; return 0;}
    //if(b==v[0]) {cout<<0<<endl; return 0;}
    ll d;
    ll c=1;

    while(1)
    {
        d=b*q;
        if(d>l) break;
        vector<ll>::iterator it;
        it = find (v.begin(), v.end(), d);
        if( it==v.end()) c++;

        b=d;
    }
    cout<<c<<endl;
    return 0;
}
