#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
        cout<<"Case "<<j<<": "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
    return 0;
}
