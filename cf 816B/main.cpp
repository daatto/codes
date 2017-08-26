#include <bits/stdc++.h>

using namespace std;
int n,k;
vector<int>v;
vector<int>vv;
bool check(int x)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x>=v[i]&&x<=vv[i]) c++;
        if(c==k) return true;
    }
    return false;

}

int main()
{

    int q;

    cin>>n>>k>>q;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(x);
        vv.push_back(y);
    }
    for(int i=0;i<q;i++)
    {
        int c=0;
        int x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            if(check(i)==true) c++;
        }
        cout<<c<<endl;


    }
    return 0;
}
