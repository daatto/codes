#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    long long n,k;
    vector<long long>v;
    cin>>n>>k;
   // long long y,z;
    //cin>>y;
    long long c=0;
    for(long long i=0;i<n;i++)
    {
        long long y;
        cin>>y;
        if(y<k) c++;
        else
        {
            c+=y/k;
            if(y%k) c++;
        }




        //v.push_back(x);
    }
    if(c%2==1)
    cout<<(c/2) +1<<endl;
    else
        cout<<(c/2)<<endl;

    return 0;
}
