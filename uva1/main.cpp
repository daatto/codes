#include<stdio.h>


unsigned long long g(unsigned long long n){
unsigned long long r,sum=0;

while(n!=0){
    r=n%10;
    sum=sum+r;
    n=n/10;
}


if(sum<10){
return sum;
}
else if(sum>=10)
 g(sum);

}


int main()
{
    unsigned long long n;
    while(scanf("%llu",&n)==1){

        if(n==0){
break;        }
        else{
           printf("%llu\n",g(n));
        }

    }



    return 0;
}
