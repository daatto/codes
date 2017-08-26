#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
    string w;
    vector<string>sh;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        sh.push_back(w);

    }
    sort(sh.begin(),sh.end());
    int vs=sh.size();
    int mx=0;
    string mc=sh[0];

    for(int j=0;j<vs;j++)
    {
        int co=(int)count(sh.begin(),sh.end(),sh[j]);
        if(co>mx)
        {
            mx=co;
            mc=sh[j];
        }
    }
    cout<<"Case "<<k<<": "<<mc<<endl;
    }
    return 0;
}
