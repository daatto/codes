#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    string s;
    cin>>s;
    int c=0,e=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='V' && s[i+1]=='K') {c++; s[i]='x';
        s[i+1]='x';
        //cout<<s<<endl;
         }
        //else if(s[i]=='V' && s[i+1]!='K' && e==0) {c++; e++;}
    }


        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='V' && s[i+1]=='V') {c++;
            break;}
            else if(s[i]=='K' && s[i+1]=='K') {c++;
            break;}
        }
    cout<<c<<endl;
    return 0;
}
