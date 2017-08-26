#include<stdio.h>

int main()
{

    long long n, i, c=0;
    scanf("%lld" ,&n);
    if(n<=5){
    printf("1\n");
    return 0;
    }

    else if(n>5){

    for(i=5;i>0;i--)
        if (n%i==0){
            c=n/i;
    break;
        }
    }
printf("%lld" ,c);

    return 0;
}
