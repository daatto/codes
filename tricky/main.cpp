#include <bits/stdc++.h>

using namespace std;

int main()
{
     long long s,d,c;

    while(cin>>s>>d){
    while(d-s>0)
    {
        d=d-s;
        s++;
    }
    cout<<s<<endl;
    }
}
