#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }
    if(n%2 ==0) cout<<n/2 -1<<endl;
    else
        cout<<n/2<<endl;


    //cout<<c<<endl;
    return 0;
}
