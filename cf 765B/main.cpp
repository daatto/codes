/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<char>v;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        v.push_back(s[i]);
    }
    sort( v.begin(), v.end() );
    //v.erase( unique( v.begin(), v.end() ), v.end() );
    set<int> ss( v.begin(), v.end() );
    v.assign( ss.begin(), ss.end() );
    int l=v.size();
    vector<char>vv;
    for(int i=0; i<l; i++)
    {
        char x=97+i;
        vv.push_back(x);
    }
    if(v==vv) cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int n=s.size();
    string ss="";
    for(long long int i=0; i<n; i++)
    {
        if(ss.empty() || ss[ss.size()-1]<s[i]) {  ss+=s[i];}
    }
    n=ss.size();
    for(long long int i=0; i<n; i++)
    {
        long long int  a=ss[i];
        if(a!=97+i)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}

