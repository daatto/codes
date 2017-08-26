#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,sum=0,ava=0;
    for(int i=1;i<=12;i++){

        cin>>a;
        sum+=a;
    }
    ava=sum/12;
    cout<<"$"<<ava<<endl;
    return 0;
}
