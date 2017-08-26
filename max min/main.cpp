#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s1,s2;
        int c(0),d(0);
        cin>>s1;
        cin>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1.size()==s2.size())
        {
            for(int i=0; i<s1.size(); i++)
            {
                for(int j=0; j<s2.size(); j++)
                {
                    if(s1[i]==s2[j]) {c++;
                    continue;}

                }

            }
            cout<<(s1.size()-c)*2<<endl;
        }
        else if(s1.size()>s2.size())
        {
            for(int i=0; i<s2.size(); i++)
            {
                for(int j=0; j<s1.size(); j++)
                {
                    if(s2[i]==s1[j]) c++;

                }
                if(c++) d++;


            }
            cout<<s1.size()-s2.size()+(c-d)*2<<endl;
        }
        else
        {
            for(int i=0; i<s1.size(); i++)
            {
                for(int j=0; j<s2.size(); j++)
                {
                    if(s1[i]==s2[j]) c++;

                }
                if(c++) d++;

            }
            cout<<s2.size()-s1.size()+(c-d)*2<<endl;
        }
    }

    return 0;
}
