#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,m;
    cin>>t;
    for(int z=1; z<=t; z++)
    {
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        if(a[0]!=0)
        {
        cout<<"Case "<<z<<": ";
        for(int j=0;j<m;j++)
        cout<<a[j];
        }
        else
        {
            cout<<"Case "<<z<<": "<<a[0];
        for(int j=1;j<m;j++)
        cout<<a[j];
        }
    }
    return 0;
}
