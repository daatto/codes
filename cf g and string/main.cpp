#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.size()>100) return 0;
    else
    {
        int a(0);
        int p(0);
        for(int i=(s.size()-1); i>=0; i--)
        {
            if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||(s[i]=='Y'))
            {
                break;
            }
            p++;
        }

        if(p==0) cout<<1<<endl;
        else if(p==s.size()) cout<<s.size()+1<<endl;
        else{
        cout<<p+2<<endl;}
    }
    return 0;
}
