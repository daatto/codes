#include<bits/stdc++.h>

using namespace std;
int f(int n){
    int i,p,result;
for(i=2;i<=sqrt(n);i++)
    if(n%i==0){
        while(n%p==0){
            n=n/p;
        }
        result*=(1-(1/p));
    }
    if(n>1)
        result*=(1-(1/n));
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
