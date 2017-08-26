#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;
    string s="";
    if(n==3)
    {
        cout<<"bba"<<endl;
    }
    else if(n==2)
    {
        cout<<"aa"<<endl;
    }
    else if(n==1)
    {
        cout<<"a"<<endl;
    }
    else
    {
       char x;
       s+="b";
       s+="b";

        for(int i=2;i<n;i++)
        {
            if(s[i-1]=='b' && s[i-2]=='b') s+="a";
            else if(s[i-1]=='a' && s[i-2]=='a') s+="b";
            else if(s[i-1]=='a' && s[i-2]=='b') s+="a";
            else if(s[i-1]=='b' && s[i-2]=='a') s+="b";
        }
        cout<<s<<endl;
    }
    return 0;
}
