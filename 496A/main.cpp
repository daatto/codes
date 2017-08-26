#include <iostream>

using namespace std;

int main()
{
    int n,i,dpair=0,dskip,k1,k2;
    int a[100];
    cin>>n;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]-a[i-1]>dpair)
        {
            dpair=a[i]-a[i-1];
            k1=i;
        }
    }
    dskip=a[2]-a[0];
    for(i=3;i<n;i++)
    {
        if(a[i]-a[i-2]<dskip)
        {
            dskip=a[i]-a[i-2];
            k2=i;
        }
    }
    if(k2-1==k1||k2-1==k1+1)
    {
        dpair=a[k2]-a[k2-2];
    }
    else
    {
        if(dskip>dpair)
            dpair=dskip;
    }
    cout<<dpair;
    return 0;
}
