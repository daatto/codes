#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int m;
        cin>>m;
        if(m>100) return 0;
        if(m>=80&&m<=100) cout<<"Case"<<" "<<i<<":"<<" "<<"A+"<<endl;
        if(m>=75&&m<=79) cout<<"Case"<<" "<<i<<":"<<" "<<"A"<<endl;
        if(m>=70&&m<=74) cout<<"Case"<<" "<<i<<":"<<" "<<"A-"<<endl;
        if(m>=65&&m<=69) cout<<"Case"<<" "<<i<<":"<<" "<<"B+"<<endl;
        if(m>=60&&m<=64) cout<<"Case"<<" "<<i<<":"<<" "<<"B"<<endl;
        if(m>=55&&m<=59) cout<<"Case"<<" "<<i<<":"<<" "<<"B-"<<endl;
        if(m>=50&&m<=54) cout<<"Case"<<" "<<i<<":"<<" "<<"C"<<endl;
        if(m>=45&&m<=49) cout<<"Case"<<" "<<i<<":"<<" "<<"D"<<endl;
        if(m>=0&&m<=44) cout<<"Case"<<" "<<i<<":"<<" "<<"F"<<endl;
    }
    return 0;
}
