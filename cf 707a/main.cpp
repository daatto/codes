#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans=0;
    char a;
    int p,q;
    cin>>p>>q;

        for(int j=1;j<=p;j++)
        {
            for(int i=1;i<=q;i++)
                {
                    cin>>a;
                if(a=='C' || a=='Y' || a=='M')
                ans++;
                }

        }
        if(ans>0)
            cout<<"#Color"<<endl;
        else
            cout<<"#Black&White"<<endl;

    return 0;
}
