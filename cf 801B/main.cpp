#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    string x,y="",z;
    cin>>x>>z;
    for(int i=0;i<x.size();i++)
    {

        if(x[i]<z[i]) { cout<<-1<<endl; return 0;}
    }
    cout<<z<<endl;
    return 0;
}
