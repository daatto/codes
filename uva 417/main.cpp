#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    map<string,int>m;
    string v[]= {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

    int x=1;
    int i,j,k,l,n;
    for( i=0; i<=25; i++)
    {
        m[v[i]]=x++;
    }
    for(i=0; i<=25; i++)
    {
        for( j=i+1; j<=25; j++)
        {
            m[v[i]+v[j]]=x++;
        }
    }
    for(i=0; i<=25; i++)
    {
        for(j=i+1; j<=25; j++)
        {
            for( k=j+1; k<=25; k++)
            {
                m[v[i]+v[j]+v[k]]=x++;
            }
        }
    }
    for(i=0; i<=25; i++)
    {
        for(j=i+1; j<=25; j++)
        {
            for(k=j+1; k<=25; k++)
            {
                for( l=k+1; k<=25; l++)
                {
                    m[v[i]+v[j]+v[k]+v[l]]=x++;
                }
            }
        }
    }
    for(i=0; i<=25; i++)
    {
        for(j=i+1; j<=25; j++)
        {
            for(k=j+1; k<=25; k++)
            {
                for(l=k+1; k<=25; l++)
                {
                    for( n=k+1; n<=25; n++)
                    {
                        m[v[i]+v[j]+v[k]+v[l]+v[n]]=x++;
                    }
                }
            }
        }
    }
    string xx;
    while(cin>>xx) cout<<m[xx]<<endl;
    return 0;
}
