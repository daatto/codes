#include <iostream>

using namespace std;

int main()
{
    int n,ans(0);
    long x;

    cin>>n>>x;
    for(int i=1;i<=n;i++)
    if(x%i==0&& x/i<=n){
        ans++;
    }
    cout<<ans<<endl;
}
