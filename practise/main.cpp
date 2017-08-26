#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,r;
        cin>>a;
        if(a%3==0)
        {
            cout<<a<<" is a multiple of 3"<<endl;
        }
        else
        {
            cout<<a<<" is not a multiple of 3"<<endl;
        }
    }
    return 0;
}
