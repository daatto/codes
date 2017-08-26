#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c[30];
    int a,d(0);
    set<string> ss;
    cin>>a;
    cin>>s;

    ss.insert(s);

    if(s.size()%a!=0) cout<<-1<<endl;
    else
    {
        memset(c,0,sizeof(c));
        int b=s.size()/a;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            c[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(c[i]==c[i+1])
            {
                d++;
            }
        }
        if(d==b)
        {
            for(int j=1;j<=b;j++)
            {

                    set<string> it;
                    for(int it=ss.begin();it!=ss.end();i++)
                    cout<<*it;
            }
            cout<<"\n";
        }
        else
            cout<<-1<<endl;

    }

    return 0;
}
