#include<bits/stdc++.h>

using namespace std;
void pfactor(int n)
{
    int i;
    while(n%2==0)
    {
        printf("%d ",2);
        n=n/2;
    }
    for(i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    if(n>2)
        printf("%d ",n);
}
int main()
{
    int n;
    cin>>n;
    pfactor(n);
    return 0;

}
