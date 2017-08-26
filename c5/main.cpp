#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int t;
    char c[10000];
    cin>>t;
    while(t--)
    {
        cin>>c;
        int b=strlen(c);
        if(strcmp(c,"1")==0 || strcmp(c,"4")==0 || strcmp(c,"78")==0)
            cout<<"+"<<endl;
        else if(c[b-1]=='5' && c[b-2]=='3')
            cout<<"-"<<endl;
        else if(c[0]=='9' && c[b-1]=='4')
            cout<<"*"<<endl;
        else if(c[0]=='1' && c[1]=='9' && c[2]=='0')
            cout<<"?"<<endl;
        else
            cout<<"+"<<endl;
    }
    return 0;
}
