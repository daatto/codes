#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n]={0};
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1]) b[i]++;
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                v.push_back(i);

            }

        }
        if(v.size()>1){
        int c=0,z=0;
        for(int i=0;i<v.size()-1;i++)
        {
            z=v[i+1]-v[i];
            if(z>c) c=z;

        }

        if(c>3) {cout<<c-1<<endl;
        }
        }
        else{
        int d=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]) d++;
        }

        int e=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1]) e++;
        }

        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1]) f++;
        }
        if(d==0) cout<<"neutral"<<endl;
        else if(e==0) cout<<"allGoodDays"<<endl;
        else if(f==0) cout<<"allBadDays"<<endl;
        else
            cout<<"none"<<endl;
        }




    }
    return 0;
}
