#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    vector<char>v;
    cin>>s;
    int  d=n-2;
    if(n%2==1)
    {
      if(n==1) cout<<s<<endl;
      else{
      int i=0;
      while(1) {
      v.push_back(s[d]);
      d-=2;
      if(d<0) break;
      }
      v.push_back(s[0]);
      d=2;
      while(1)
      {
       v.push_back(s[d]);

      d+=2;
      if(d>=n) break;
      }

       for(int i=0;i<v.size();i++)
       {
           cout<<v[i];
       }
       cout<<endl;
      }
    }
    else
    {
        if(n==2) cout<<s<<endl;
        else
        {
        int e=n-2;
        while(1)
        {
            v.push_back(s[e]);
            e-=2;
            if(e<=0) break;
        }
        v.push_back(s[0]);
        e=1;
        while(1)
      {
       v.push_back(s[e]);

      e+=2;
      if(e>n) break;
      }

       for(int i=0;i<v.size();i++)
       {
           cout<<v[i];
       }
       cout<<endl;
        }
    }
    return 0;
}
