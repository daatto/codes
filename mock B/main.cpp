#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a,b,c(0);
        vector<int> v;
        cin>>n;
        for(int j=1;j<n;j++)
        {
            cin>>a>>b;
            c=c+a-b;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        cout<<"Case "<<i<<": "<<v[v.size()-1]<<endl;
    }
    return 0;
}
