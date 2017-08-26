#include <bits/stdc++.h>
using namespace std;
int ugly[1500];
int f(int d)
{
    for (int i = 0; i < 1500; i++)
    {
        if (ugly[i] == d)
            return ugly[i+1];
    }
    return -1;
}

int main()
{
    vector <int> v;
    ugly[0]=1;
    int a=1,b=1,c=1,i=0;
    while(i<1500)
    {

        if(2*a <= 3*b && 2*a<=5*c)
        {
            if(2*a> ugly[i])
                ugly[++i]=2*a;
            a=f(a);
        }
        else if(3*b <= 2*a && 3*b<=5*c)
        {
            if(3*b> ugly[i])
                ugly[++i]=3*b;
            b=f(b);
        }
        else if(5*c <= 3*b && 5*c<=2*a)
        {
            if(5*c> ugly[i])
                ugly[++i]=5*c;
            c=f(c);
        }
    }
    printf("The 1500'th ugly number is %d.\n", ugly[1499]);
    return 0;
}
