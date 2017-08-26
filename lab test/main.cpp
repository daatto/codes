#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b){
    if(__gcd(a,b)==1) printf("%10d%10d    Good Choice\n\n",a,b);
    else printf("%10d%10d    Bad Choice\n\n",a,b);
    }
}
