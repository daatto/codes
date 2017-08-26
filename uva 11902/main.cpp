#include<bits/stdc++.h>
#define Set(a, s) memset(a, s, sizeof (a))
using namespace std;

int n;
bool mat[103][103];
bool vis[103];

void Line ()
{
    printf ("+");
    for ( int i = 0; i < n * 2 - 1; i++ ) printf ("-");
    printf ("+\n");
}

void dfs (int x, int y)
{
    if ( x == y ) return;

    vis [x] = true;

    for ( int i = 0; i < n; i++ ) {
        if ( mat [x] [i] && !vis [i] ) dfs (i, y);
    }
}

int main ()
{

    int t;
    cin>>t;
    int cases = 0;

    while ( t-- ) {
        cin>>n;

        Set (mat, false);

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                int a; cin>>a;
                mat [i] [j] = a;
            }
        }

        bool output [103][103];
        bool firstVis [103];

        Set (vis, false);
        dfs (0, -1);
        for ( int i = 0; i < 103; i++ ) firstVis [i] = vis [i];

        for ( int i = 0; i < n; i++ ) {
            Set (vis, false);
            dfs (0, i);
            for ( int j = 0; j < n; j++ ) {
                if ( firstVis [j] && !vis [j] ) output [i] [j] = true;
                else output [i] [j] = false;
            }

            output [i] [i] = firstVis [i];
        }

        printf ("Case %d:\n", ++cases);
        Line ();
        for ( int i = 0; i < n; i++ ) {
            cout<<"|";
            for ( int j = 0; j < n; j++ ) {
                if ( output [i] [j] )  cout<<"Y|";
                else  cout<<"N|";
            }
            cout<<endl;
            Line ();
        }

    }

	return 0;
}
