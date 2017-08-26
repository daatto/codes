#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,s;

    cin>>a>>b>>c;
    //if(c>0){
    s=1000000000;

    for(long long i=a;i<=s;i=i+c){
        if(i==b){
        printf("YES\n");
        break;
        }
        if(i==b+1){
            printf("NO\n");
            break;
        }
    }

   // }
  /*  else(c<0){
    s=-1000000000;

    for(long long i=a;i<=s;i=i+c){
        if(i==b){
        printf("YES\n");
        break;
        }
        if(i==b+1){
            printf("NO\n");
            break;
        }
    }
    }*/

    return 0;
}
