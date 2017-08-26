#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout << "Hello world!" << endl;
    int n,m,e=0;
    cin>>n>>m;
    vector<string>v;
    while(m--)
    {

        int a[10000];
        int b;
        string s;
        getline(cin,s);
        getchar();
        stringstream ss(s);
        int i=0;
        while(ss>>b)
        {

            a[i]=b;
            i++;
            //cout<<a[i-1]<<" ";
        }
        int c=0,d=0;
        for(int j=0; j<=i; j++)
        {
            for(int k=0; k<=i; k++)
            {
                if(a[j]==-a[k]) v.push_back("NO");
            }

        }
        if(e==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        return 0;
    }
