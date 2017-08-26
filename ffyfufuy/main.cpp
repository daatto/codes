#include<bits/stdc++.h>

using namespace std;
long long fun(long long n,long long c){
    long long a;
    return a+(n-1)*c;
}
int main()
{
    long long a,b,c,i;
    cin>>a>>b>>c;
    for(i=1;i<=b;i=i+c){

        if(fun(i,c)==b){
             printf("YES\n");
        break;
        }
        else{
             printf("NO\n");
            break;
        }
    }
    return 0;







}

