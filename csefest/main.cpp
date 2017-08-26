#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    vector<int>a;
    int j=1,c;
    while(cin>>n)
    {
        if(n==0) return 0;
        else
            c=0;
            a.clear();
            for(int i=0;i<n;i++){
            cin>>x;
            if(x<-100 || x>100) return 0;
            a.push_back(x);
            }
            for(int i=1;i<n-1;i++)
            {
                if(a[i]>0 && a[i]>a[i-1] && a[i]>a[i+1]) c++;
            }
            cout<<"Case "<<j<<": "<<c<<endl;
            j++;


    }
    return 0;
}
