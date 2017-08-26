#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>

using namespace std;
    long long a[1000000];
    long long  b[1000000];

int main()
{
       int i,j,n;
       long long nmax;
       a[0]=0;
       b[0]=0;
       a[1]=1;
       b[1]=1;
       nmax=1;
       for(i=2;i<=99999;i++)
       {
           if(i%2)
           {
               j=(i-1)/2;
               a[i]=a[j]+a[j+1];
           }
           else
            a[i]=a[i/2];
           if(a[i]>nmax)
            nmax=a[i];
           b[i]=nmax;
       }
       while(~scanf("%d", &n)&&n)
       {
           printf("%lld\n", b[n]);
       }

    return 0;
}
