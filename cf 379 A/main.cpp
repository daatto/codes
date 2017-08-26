#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a<b)
    {
        cout<<a<<endl;
        return 0;
    }
else
{

    int sum=a;
    while(a>=b)
    {
        int div=a/b;
        sum+=div;
        int mod=a%b;
        a=(div+mod);
    }
    cout<<sum<<endl;
    return 0;
}
}
