#include<stdio.h>
#include<math.h>

int main()
{

    long long n, i,c=0;
    scanf("%lld" ,&n);
    if(n%5==0){
            i=n/5;
    printf("%lld" ,i);
    return 0;
    }

    else{
            c=floor(n/5);

        }

printf("%lld",c+1);

    return 0;
}
