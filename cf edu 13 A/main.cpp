#include <iostream>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    int i=0;
    while(k*i<=n)
    {
    i++;
    }
    cout<<k*i<<endl;
    return 0;
}
