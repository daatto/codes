#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //vector<string>v;
    long long n;
    cin>>n;
    int c=0;
    for(long long i=0; i<n; i++)
    {
        string x;
        cin>>x;
        if(x=="Icosahedron") c+=20;
        else if(x=="Cube") c+=6;
        else if(x=="Tetrahedron") c+=4;
        else if(x=="Dodecahedron") c+=12;
        else if(x=="Octahedron") c+=8;
    }
    cout<<c<<endl;
    return 0;
}
