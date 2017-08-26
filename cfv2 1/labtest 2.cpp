#include<stdio.h>

int main()
{
    int n;
    int i,z=0,f=0;
    scanf("%d" , &n);
    while(n--)
    {
        scanf("%d", &i);
        if(i==5) f++;
        else if(i==0) z++;
    }
    if(f>=9 && z>0)
    {
        int j;
        for(j=0;j< f/9;j++) printf("555555555");
        for(int j=0;j<z;j++) printf("0");
        printf("\n");
    }
    else if(z>0) printf("0\n");
    else printf("-1\n");



    return 0;
}
