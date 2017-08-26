#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    if(k>a ||k>b)
    {
        cout<<"NO"<<endl;
    }
    vector<char>v;
    int i=1;
    if(a>b)
    {
        if(a-b>k){
                int x=k;
        while(x--)
        {v.push_back('G');a--;}}
        else{
            int y=a-b;
            while(y--){  v.push_back('G'); a--;}
        }
    }
    else
    {
        if(b-a>k){
                int x=k;
        while(x--)
        {v.push_back('B');b--;}}
        else{
            int y=b-a;
            while(y--) {v.push_back('B');b--;}
        }
    }
    while(a>=k or b>=k)
    {
        if( v[i-1]!='G')
        {
            v.push_back('G');
            i++;
            a--;
        }
        else
        {
            if(v[i-1]!='B')
            {
                v.push_back('B');
                b--;
                i++;
            }
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
