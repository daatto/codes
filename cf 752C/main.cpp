#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;



int main()
{
    lli n;
    cin>>n;

    string s;
    cin>>s;

    char x='a';
    char y='a';
    lli c=0;

    for(lli i=0; i<s.size(); i++)
    {
        if(s[i]=='R' || s[i]=='L')
        {

            if(x=='a') x=s[i];
            else if(x!= s[i])
            {
                c++;
                x=s[i];
                y='a';
            }
        }
        else if(s[i]=='U' || s[i]=='D')
        {
            if(y=='a') y= s[i];
            else if(y != s[i])
            {
                c++;
                y= s[i];
                x= 'a';
            }
        }
    }
    cout<<c+1<<endl;
    return 0;
}
