#include <bits/stdc++.h>

using namespace std;

vector<int> a[1000001];
int main()
{

    int x,y,z,n,c;
    while(cin>>x>>y){
        for ( int i = 0; i < 1000001; i++ ) {
            a[i].clear ();
        }
        for(int i=0;i<x;i++){
            cin>>z;
            a[z].push_back (i + 1);
        }
        for(int i=0;i<y;i++){
            cin>>c>>n;
             if ( a[n].size()<c ) {
               cout<<0<<endl;
             }
            else{
                cout<<a[n][c - 1]<<endl;
            }
        }
    }
}
