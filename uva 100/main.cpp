#include <bits/stdc++.h>
using namespace std;
int f(int n){
int c=1;
while(n!=1)
{
    if(n%2==0) n=n/2;
    else n=3*n+1;

    c++;
}
return c;
}

int main()
{
    int i,j;

    while(cin>>i>>j){
    int a=f(i);
    for(int k=i; k<=j; k++)
    {
        int z=f(k);
        if(z>a) a=z;
    }
    cout<<i<<" "<<j<<" "<<a<<endl;
    }
    return 0;
}
