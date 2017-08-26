#include <bits/stdc++.h>

using namespace std;
int f(int x)
{
    if(x<0) return x*-1;
    else
        return x;
}

int main()
{
    int t,b,c,r,s(0),u;
    cin>>t;
    vector<pair<int,int> >p;
    vector<int>v;
    int a(0);
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        p.push_back(make_pair(x,y));
        v.push_back(x-y);
        a+=(x-y);
    }
    a=f(a);

    for(int i=0;i<v.size();i++)
    {
        b=p[i].second;
        c=p[i].first;
        r=a-f(-p[i].first+p[i].second)+(b-c);
        if(f(r)>s) {s=f(r);
        u=i;}
    }
     if(s>a) cout<<u+1<<endl;
     else
        cout<<0<<endl;

    return 0;
}
