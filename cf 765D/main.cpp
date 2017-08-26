#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    unsigned long long  x,k=0,y=1;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        x=pow(a,b);
        y*=x;
    }
    //y=y%1000000007;
    for(ll i=0;i<s.size();i++)
    {
        if((s[i]=='1')){
           for(ll j=0;j<y;j++)
           {
               if((__gcd((j+i+1),y)==1))
                k+=1;
           }
        }
    }
    k=k%1000000007;
    cout<<k<<endl;
    return 0;
}
// eta try taw E er hoy ni eta





