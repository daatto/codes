#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int x;
    cin>>x;
    if(x==0)
    {
        if(n%6==1|| n%6==2)
            cout<<1<<endl;
        else if(n%6==3|| n%6==4)
            cout<<2<<endl;
        else if(n%6==5|| n%6==0)
            cout<<0<<endl;

    }
    else if(x==1)
    {
        if(n%6==4|| n%6==1)
            cout<<0<<endl;
        else if(n%6==3|| n%6==0)
            cout<<1<<endl;
        else if(n%6==5|| n%6==2)
            cout<<2<<endl;
    }
    else if(x==2)
    {
        if(n%6==2|| n%6==3)
            cout<<0<<endl;
        else if(n%6==4|| n%6==5)
            cout<<1<<endl;
        else if(n%6==1|| n%6==0)
            cout<<2<<endl;
    }

    return 0;
}
