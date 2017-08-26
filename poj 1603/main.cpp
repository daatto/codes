#include <bits/stdc++.h>
using namespace std;


int N, M, t=1,a[20][20];
int main()
{

    while (cin>>N)
    {
        memset(a, 2, sizeof(a));

        while (N--)
        {
            cin>>M;
            M--;
            a[0][M] = 1;
            a[M][0] = 1;
        }
        for (int i = 1; i < 20 - 1; i++)
        {
            cin>>N;
            while (N--)
            {
                cin>>M;
                M--;
                a[i][M] = 1;
                a[M][i] = 1;
            }
        }
        for (int k = 0; k < 20; k++)
        {
            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
                }
            }
        }
        int x,y;
        cin>>N;
        cout<<"Test Set #"<<t<<endl;
        while (N--)
        {
            cin>>x>>y;
            cout<<setw(2)<<x<<" to "<<setw(2)<<y<<": "<<a[x-1][y-1]<<endl;
            //printf("%d to %d: %d\n", x, y, a[x - 1][y - 1]);
        }
        cout<<endl;
        t++;
    }
    return 0;
}
