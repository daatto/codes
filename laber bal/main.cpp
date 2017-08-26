#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/2;
    int c=n-4;
    for(int i=1; i<=n; i++)
    {
        for(int j=a; j>=1; j--)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=1 && i!=n)
        {
            if(i<=n/2+1)
            {
                for(int k=1; k<=(2*i - 3); k++) cout<<" ";
            }
            else
            {
                for(int k=0; k<=c+1; k++) cout<<" ";
            }
            cout<<"*"<<endl;
        }
        else if(i==1 || i==n)
        {
            cout<<"\n";
        }
        if(i<=n/2)
        {a--;}
        else
        {a++;c-=2;}
    }
    return 0;
}
