#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    int b[1000];

    for(int i=0;i<n;i++)
    {
       // int x;
        cin>>a[i];
        //x=a[i];
        //v.push_back(x);

    }
    for(int i=0;i<n;i++)
    {
        //int x;
        cin>>b[i];
        //x=b[i];
       // vv.push_back(x);

    }
    /*if(n==1 && a[0]!=b[0]) cout<<-1<<endl;
    else
    {


    sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );
    sort( vv.begin(), vv.end() );
    vv.erase( unique( vv.begin(), vv.end() ), vv.end() );
    sort(a,a+n);
    sort(b,b+n);
    int x=max(v.size(),vv.size())
    for(int i=0;i<max(v.size(),vv.size());i++)
    {

    }

    }*/
    int o=0,oo=0,tt=0,tth=0,ff=0,ffi=0,t=0,th=0,f=0,fi=0;
    //o=t=th=f=fi=oo=tt=tth=ff=ffi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1) o++;
        else if(a[i]==2) t++;
         else if(a[i]==3) th++;
         else if(a[i]==4) f++;
         else if(a[i]==5) fi++;
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==1) oo++;
        else if(b[i]==2) tt++;
         else if(b[i]==3) tth++;
         else if(b[i]==4) ff++;
         else if(b[i]==5) ffi++;
    }
    if(o+oo%2==1 || t+tt%2==1 || th+tth%2==1 || f+ff%2==1 || fi+ffi%2==1) cout<<-1<<endl;
    else
    {
        int k;
        k=abs((o-oo)/2)+ abs((t-tt)/2)+abs((th-tth)/2) + abs((ff-f)/2) + abs((fi-ffi)/2);
        cout<<k/2<<endl;
    }
    return 0;
}
