#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair<int,int> >v;
    vector<pair<int,int> >w;
    while(t--)
    {
       int s,f;
       int i=0;
        while(cin>>s>>f)
        {
            if(s==0 && f==0)
            {
                continue;
            }
            else
            {
                v.push_back(make_pair(s,f));
                w.push_back(make_pair(f,s-f));
            }
        }
        sort(v.begin(),v.end());
        sort(w.begin(),w.end());
        for(int i=0;i<v.size();i++)
        {
            v[i].second
        }
    }
    return 0;
}
