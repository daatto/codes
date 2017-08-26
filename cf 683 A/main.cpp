#include <iostream>

using namespace std;

int main()
{
    int a;
    signed int x,y;
    cin>>a>>x>>y;
    if(x<0||y<0)
    {
        cout<<2<<endl;
        return 0;
    }
    if(x<a&&y<a)
    {
        cout<<0<<endl;
        return 0;
    }
    if(x==a&&y<=a)
    {
        cout<<1<<endl;
        return 0;
    }
    if(y==a&&x<=a)
    {
        cout<<1<<endl;
        return 0;
    }
}
