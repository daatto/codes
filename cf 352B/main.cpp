#include <bits/stdc++.h>

using namespace std;

bool f(char x,string s)

{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=x) c++;
    }
    if(c==s.size()) return false;
    else
        return true;
}

int main()
{
    string s,t;
    cin>>s>>t;
    vector<char> v1;
    vector<char> v2;
    string s1="abcdefghijklmnopqrstuvwxyz";
    int l=0;

    if(s==t) {cout<<0<<endl;
    return 0;}
    else
    {
        for(int i=0;i<s.size();i++)
        {

            if(s[i]!=t[i])
            {
                if((f(s[i],s1)== true) && (f(t[i],s1)==true))
                {int x,y;
                x=s[i];
                y=t[i];
                v1.push_back(s[i]);
                v2.push_back(t[i]);
                s1.replace(s1.begin(),s1.begin()+x-97,">");
                s1.replace(s1.begin(),s1.begin()+y-97,">");
                l++;
                }
                else if(f(s[i],s1)== true && f(t[i],s1)==false)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                else if(f(s[i],s1)== false && f(t[i],s1)==true)
                {
                    cout<<-1<<endl;
                    return 0;
                }

            }
        }
        if(l==0){cout<<-1<<endl; return 0;}
        cout<<l<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<endl;
        }

    }
    return 0;

}
