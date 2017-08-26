#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<string>v,vv;
void gen()
{
    string ss="A";
    for(ll i=0; i<50; i++)
    {
        v.push_back(ss);
        if(ss[ss.size()-1]=='Z' || ss[ss.size()-1]=='z')
        {
            ss+="a";
        }
        else
        {
            ss[ss.size()-1]++;
        }
    }
}
int main()
{

    gen();

        string s;
    ll a,b,c=0;
    cin>>a>>b;
    for(ll i=0; i<a-b+1; i++)
    {
        cin>>s;
        if(i==0)
        {
            if(s=="YES")
            {
                for(ll j=0; j<b; j++)
                {
                    vv.push_back(v[j]);
                    c++;
                }
            }
            else
            {
                for(ll j=0; j<b-1; j++)
                {
                    vv.push_back(v[j]);
                    c++;
                }
                vv.push_back(v[0]);
                c++;
            }
        }
        else
        {
            if(s=="YES")
                vv.push_back(v[c]);
            else
            {
                vv.push_back(vv[c-b+1]);
            }
            c++;
        }
    }
    for(ll k=0;k<a;k++)
    {
        cout<<vv[k];
        if(k!=a-1)
            cout<<" ";
    }
    return 0;
}
