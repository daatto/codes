#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,long long int>m;
    vector<pair<string,string> > v;
    string s;
    while(cin>>s)
    {
        if(s=="#") break;
        string p=s;
        for( long long int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        sort(s.begin(),s.end());
        m[s]++;
        v.push_back(make_pair(p,s));
    }
    sort(v.begin(),v.end());
    for(long long int i=0;i<v.size();i++)
    {
        if(m[v[i].second]==1)
            cout<<v[i].first<<endl;
    }
    return 0;
}
