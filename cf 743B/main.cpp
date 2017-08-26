#include <bits/stdc++.h>

using namespace std;
long long f(int n)
{
    if(n==1) return 1;
    else
        return 1+2*f(n-1);
}

int main()
{
    int n,k;
int c=1;
    cin>>n>>k;
    if(k>f(n)) return 0;

    else
    {
        if(k%2==1) {cout<<1<<endl;
        return 0;}

        for(int i=2;i<100;i=i*2)
        {

            if((k-i)%(2*i) ==0) {
                    cout<<(log(i)/log(2))+1<<endl;
                    break;}
        }
    }
    return 0;
}
