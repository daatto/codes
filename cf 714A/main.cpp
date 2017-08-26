#include <iostream>

using namespace std;

int main()
{
    unsigned long long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e;
    if(e==c)
    {
        f=b-c-1;
    }
    else if(e>c)
    {
        f=b-c;
    }
    else
    {
        f=b-c+1;
    }
    cout<<f<<endl;
    return 0;
}
