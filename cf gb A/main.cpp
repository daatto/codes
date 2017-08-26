#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int x=240-k;
    int y=0,c=0;
    for(int i=1;i<=n;i++)
    {
        //x=x/5*i;
        y+=5*i;

        if(y>x) break;
        c++;
    }
    cout<<c<<endl;
    return 0;
}
