#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,d,x;
    int c=0;
    cin>>s;
    d=s;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>'z' || s[i]<'a') return 0;
    }
    while(1)
    {
        x=s[s.size()-1];
        s.erase(s.begin()+s.size()-1);
        s=x+s;
        c++;
        if(s==d) break;
    }
    cout<<c<<endl;



    return 0;
}
