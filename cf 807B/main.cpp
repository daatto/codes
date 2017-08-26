#include <bits/stdc++.h>

using namespace std;
int p;
bool f(int x)
{
    int i=(x/50)%475;
    for(int j=0;j<25;j++)
    {
        i=(i*96 +42)%475;
        if(26+i==p) return true;
    }
    return false;
}
int main()
{
    //cout << "Hello world!" << endl;
    int x,y;
    int c=0;

    cin>>p>>x>>y;
    int p=x;

    while(p>=y)
    {
        if(f(p)==true) {cout<<0<<endl; return 0;}
        else  p=p-50;
    }
    //vector<int>v;

    while(f(x)==false)
    {
        if(f(x-50)==true) break;
        x=x+100;
        c++;

    }
    cout<<c<<endl;

    return 0;
}
