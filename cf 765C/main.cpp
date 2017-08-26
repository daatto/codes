#include <iostream>

using namespace std;

int main()
{
     long long int k,a,b;
    long long int c=0;
    cin>>k>>a>>b;
    if(a<k && b<k) cout<<-1<<endl;
    else if(a<k && b%k!=0) cout<<-1<<endl;
    else if(b<k && a%k!=0) cout<<-1<<endl;
    else
    {
        c+=a/k;
        c+=b/k;
        cout<<c<<endl;
    }
    return 0;
}
