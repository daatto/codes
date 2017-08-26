#include <bits/stdc++.h>

using namespace std;

int fun(int n){
int sum;

while(n){
int r=n%10;
 sum+=r;
}
if(sum>0){
    n=fun(n);
}
else
    return sum;
}

int main()
{
    int ara[1000000];
    int cnt=0,i;

    for(i=o;i<n;i++){
        if (ara[i]!=fun(i))
            cnt++;


    }

    return 0;
}
