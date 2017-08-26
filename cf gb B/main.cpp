#include <bits/stdc++.h>

using namespace std;


double pi= acos(-1.0);
int main()
{
    vector<pair<int,string> >v;
    int n;
    int c=0;
    double rx=0.0,d=0.0,r=20000.0/pi;

    while(n--)
    {
        int x;
        string y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].first>20000)
        {v[i].first=v[i].first %20000;}
    }
    if(v[0].second != "South") cout<<"No"<<endl;
    else
    {
       int i=0;

           while(1) {
                if(i==n) break;
            while(v[i].second == "North" || "South"){
                if(v[i].second =="North") c-=v[i].first;
                else if(v[i].second =="South") c+=v[i].first;
                rx=r*sin((c)/r);
                i++;
            }
             i--;
            while(v[i].second=="East" || "West")
            {

                if(v[i].second=="East")
                {
                    d+=(v[i].first)/rx;
                }
                else if(v[i].second=="West")
                {
                    d-=(v[i].first)/rx;
                }
                i++;
            }
            i--;
           }
        if(d==0 && c==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
