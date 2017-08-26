#include <iostream>

using namespace std;

int main()
{
    int t,i,j,k,c=1;
    cin>>t;
    while(c<=t)
    {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<"Case "<<c++<<":"<<endl;
        for(i=0;i<=x;i++)
        {
            for(j=i+1;j<=y;j++)
            {
                for(k=j+1;k<=z;k++)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }

    }
    return 0;
}
