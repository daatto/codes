#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;
    vector<int>v;
    vector<int>vv;
    vector<int>z;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        vv.push_back(y);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=vv[i]) {cout<<"rated"<<endl;
        return 0;}
        else
            c++;
    }
    if(c==n)
    {
       z=v;
       sort(z.begin(),z.end());
       reverse(z.begin(),z.end());
       if(v==z) {cout<<"maybe"<<endl;}
       else
            cout<<"unrated"<<endl;
    }
    return 0;
}
