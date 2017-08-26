#include <iostream>

using namespace std;

int main()
{
    int n,h,a,x(0);
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a>2*h) return 0;
        if(a<=h)
        {
            x+=1;
        }
        else
        {
            x+=2;
        }
    }
    cout<<x<<endl;
    return 0;
}
