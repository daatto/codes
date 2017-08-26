#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n,k;
    cin>>n>>k;
    int i=0,r=0,q=0,x;
    while(1)
    {
        i++;
        cin>>x;


        //cin>>x;
        x=x+r;
        if(x<=8)
        {
            q=q+x;
        }
        else if(x>8)
        {
            q=q+8;
            r=x-8;
        }
        if(q>=k)
        {
            break;
        }
        if(q<k && i>=n)
        {
            cout<<-1<<endl;
            return 0;
        }


    }
    cout<<i<<endl;
    return 0;
}
