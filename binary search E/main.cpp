#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    int a[50005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    if(q>25000) return 0;
    else{
    unsigned long long x,y(0);
    while(q--)
    {

        cin>>x;
        /*if(n==1 && x==a[0])
           cout<<"X"<<" X"<<endl;
        else if(x<a[0])
            cout<<"X "<<a[0]<<endl;
        else if(x==a[0])
            cout<<"X "<<a[1]<<endl;
        else if(x>a[n-1])
            cout<<a[n-1]<<" X"<<endl;
        else if(x==a[n-1])
            cout<<a[n-2]<<" X"<<endl;
        else*/

            int lo=lower_bound(a,a+n,x)-a-1;
            if(a[lo]<a[0]) cout<<"X ";
            else
                cout<<a[lo]<<" ";
            int hi=upper_bound(a,a+n,x)-a;
            if(hi>n-1) cout<<"X"<<endl;
            else
            cout<<a[hi]<<endl;

    }
    }

    return 0;
}
