#include <iostream>

using namespace std;

int main()
{
    long long k,n,w,x(0);
    cin>>k>>n>>w;
    for(long long i=1;i<=w;i++)
    {
        x+=k*i;
    }
    if(x<n)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<x-n<<endl;
    }
    return 0;
}
