#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=0;
    while(a>=1)
    {
        if(b>=2*a && c>=4*a) {
        d++;
        break;}
        else
            a--;

    }
    if(d==0) cout<<0<<endl;
    else
        cout<<7*a<<endl;
    return 0;
}
