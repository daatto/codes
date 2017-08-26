#include<bits/stdc++.h>

using namespace std;
long long fun(long long n,long long c){
    long long a;
    return a+(n-1)*c;
}
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    for(i=1;i<=b;i=i+c){

        if(fun(i,c)==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;







}

