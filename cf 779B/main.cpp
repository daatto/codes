#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    string s;
    int n;
    cin>>s>>n;
    if(s.size()<(n+1)) cout<<s.size()-1<<endl;
    else
    {

    int c=0,k=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0') c++;
        else k++;
        if(c==n) break;
    }
    cout<<k<<endl;
    }
    return 0;
}
