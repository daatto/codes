#include <bits/stdc++.h>

using namespace std;

long long a[10000000];

int f(unsigned long long n)
{
    int i;
    if(n%2==0)
        return 2;
    for(i=3;i<=sqrt(n);i=i+2){
       if(n%i==0)
    return i;
    break;
    }
   return n;
}

int main()
{



    unsigned long long n;
    scanf("%llu" ,&n);
    a[0]=0;
    a[1]=0;

    a[n]=a[n-1]+f(n);

    printf("%lld" ,a[n]);
    return 0;
}
