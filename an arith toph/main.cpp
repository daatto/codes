#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         signed int a,b,c,n;
        cin>>a>>b>>c>>n;
        if((c-b)!=(b-a))
        {
            cout<<"Case "<<i<<": "<<"Error"<<endl;
        }
        else
        {
          signed int d=b-a;
           cout<<"Case "<<i<<": "<<a+(n-1)*d<<endl;
        }
    }
    return 0;
}
