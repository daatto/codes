#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
   int main()
{
    lli n;
    lli a[100001];

    cin>>n;
    lli sum=0;


    for(lli i=0; i<n; i++) scanf("%lli", &a[i]);

    sort(a, a+n);

    lli cum[100003]={0};
    for(lli i=0; i<n; i++)
    {
        sum+=a[i];
        cum[i+1]=sum;
    }

    bool mark=false;

    for(lli i=1; i<n-1; i++)
    {
        lli s1= (cum[i+1]-cum[i-1]);
        lli s2= (cum[i+2]-cum[i+1]);
        if(s1>s2) mark=true;


    }

    if(mark) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;

}



