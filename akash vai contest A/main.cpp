#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int a;
   cin>>a;
   if(a){
   cin>>s;
   int b;
   cin>>b;
   for(int i=0;i<s.size();i++)
   {

        if(s[i]>'A'&& s[i]<='Z')
        {
            int w=s[i]-'A';
            w+=b;
            w=(w%26);
            s[i]=(char)w+ 'A';

        }
        else if(s[i]>'a'&& s[i]<='z')
        {
            int w=s[i]-'a';
            w+=b;
            w=(w%26);
            s[i]=(char)w+ 'a';

        }


   }
   }
   cout<<s<<endl;
   }
   //cout<<p<<endl;
