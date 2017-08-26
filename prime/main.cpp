#include<bits/stdc++.h>

using namespace std;

bool marked[1000000];
long long c=0;
bool isprime(int n)
{
    if(n==2) return true;
    if(n<2) return false;
    if(n%2==0) return false;

    return marked[n]=false;
}
void sieve(long long n)
{
    for(long long i=3; i*i<=n; i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}

int main()
{
    long long n;
    long long x;
    cin>>n;
    sieve(n);
    for(long long i=2; i<=n; i++)
    {
        if(marked[i]==false)
        {
            i=x;
        }
    }
    long long ara[x];
    for(long long i=0; i<n; i++)
    {
        if(n-ara[i]==ara[x])
        {
            cout<<ara[i]<<"+"<<ara[x];
        }
        else
            cout<<"Goldbach's conjecture is wrong.";
}
    return 0;
}
