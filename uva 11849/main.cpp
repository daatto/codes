#include <bits/stdc++.h>
using namespace std;
int c[1000001];
int main()
{
    int m, n;
    while (cin>>n>>m && n&&m)
    {
        for (int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int a=0;
        int b=0;
        while (m--)
        {
            int x;
            cin>>x;
            while (b<n && c[b]<x) b++;
            if (c[b]==x) a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
