#include <bits/stdc++.h>

using namespace std;

int main()
{
    struct f
    {
        string s;
        int a;
        int b;
    };
    int n;
    cin>>n;
    struct f v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i].s>>v[i].a>>v[i].b;
        if(v[i].a==1 || v[i].b>=30) cout<<v[i].s<<endl;
    }
    return 0;
}
