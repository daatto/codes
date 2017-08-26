#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    long long n,j,i,c4(0),c3(0),c2(0),c1(0);
    cin>>n;
    long long a[100000];
    for( j=0;j<n;j++)
    {
        cin>>a[j];
    }
    sort(a,a+n);
    for( i=0;i<n;i++)
    {
        if(a[i]==4) c4++;
        else if(a[i]==3) c3++;
        else if(a[i]==2) c2++;
        else if(a[i]==1) c1++;
    }
    if(c2%2==0)
    {
        c4=c4+(c2/2);
        if(c3>c1)
        {
            c4=c4+c1;
            c3=c3-c1;
            cout<<c4+c3<<endl;
        }
        else if(c3<c1)
        {
            c4=c4+c3;
            c1=c1-c3;
            if(c1%4==0)
            {
                cout<<c4+(c1/4)<<endl;
            }
            else
            {
                cout<<c4+(c1/4)+1<<endl;
            }
        }
        else if(c3==c1)
        {
            cout<<c4+c3<<endl;
        }
    }
    else
    {
        c4=c4+(c2/2);
        if(c3>c1)
        {
            c4=c4+c1;
            c3=c3-c1;
            cout<<c4+c3+1<<endl;
        }
        else if(c3<c1)
        {
            c4=c4+c3;
            c1=c1-c3;
            cout<<c4+(c1/4)+1<<endl;
        }
        else if(c3==c1)
        {
            cout<<c4+c3+1<<endl;
        }
    }

    return 0;
}
