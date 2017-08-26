#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n]={0};
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
            if(a[i]<0)
            {
                b[i]=1;
                a[i]=abs(a[i]);
            }

        }
    }
}
