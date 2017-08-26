#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,count=0,flag=0;
    string s;
    int i,j;
    cin>>t;
    for(int p=1;p<=t;p++)
    {


    cin>>s>>i>>j;
    if(i>=2400&&j>i)
    {
        count++;
    }

    }
    if(count){
        cout<<"YES"<<endl;
    }
    else
        {
            cout<<"NO"<<endl;
        }
    return 0;
}
