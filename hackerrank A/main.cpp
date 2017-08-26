#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,y,z,x,c=0,f=0;
    cin>>n;
    vector<int>v;
    vector<int>q;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        q.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(q.begin(),q.end());
    q.erase( unique( q.begin(), q.end() ), q.end() );
    for(int i=0;i<q.size();i++)
    {
        int a,b;
       a=lower_bound(v.begin(),v.end(),i)-v.begin();
       b=lower_bound(v.begin(),v.end(),i)-v.begin();
       y=b-a;
       if(y>f) f=y;
    }
    for(int i=0;i<q.size();i++) {
    int a,b;
    if((q[i+1]-q[i])==1){
    a=lower_bound(v.begin(),v.end(),q[i])-v.begin();
    b=upper_bound(v.begin(),v.end(),q[i+1])-v.begin();
    z=b-a;
    if(z>c) c=z;
    }


    }
    c=max(f,c);
    cout<<c<<endl;
    return 0;
}
