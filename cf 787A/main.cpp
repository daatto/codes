#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int e,f,g,h;
    e=a;
    f=b;
    g=c;
    h=d;
    int x=b,y=d;
    int q=0;
    for(int i=1;i<=100 ;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if((x+(i-1)*e)==(y+(j-1)*g)) {cout<<x+(i-1)*e<<endl;
            q=1; return 0;}
        }
    }
    if(q==0) cout<<-1<<endl;
    return 0;
}
