#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,x,s;
    //vector<string>aa;
    //vector<string>bb;
    vector<string>ss;
    int n;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ss.push_back(x);

    }
    /*
    int len = a.size();
    string q=ss[ss.size()-1];
    for(int i=q.size()-len;i<q.size();i++)
    {
        s.push_back(q[i]);
    }
    if(s==a) cout<<"home"<<endl;
    else
        cout<<"contest"<<endl;*/
    if(n%2==0) cout<<"home"<<endl;
    else
        cout<<"contest"<<endl;


    return 0;
}
