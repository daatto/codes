#include <bits/stdc++.h>
using namespace std;
bool f(int x)
{
    if(x==0)return true;
    else
    {
    int a[10];
    a[0]=0;
    int i=3;
    while(x)
    {
        a[i]=x%10;
        x=x/10;
        i--;
    }
    if(a[0]==a[3] && a[1]==a[2]) return true;
    else
        return false;

    }
}
int main()
{
    //cout << "Hello world!" << endl;
    string s;
    cin>>s;


        int x=(s[0]-48)*10 +(s[1]-48);
        int y=(s[3]-48)*10 +(s[4]-48);
        int c=0;
        while(1)
        {

            if(f((x*100) + y)==true)
            {
                cout<<c<<endl;
               return 0;
            }
            else{
            c++;
            y++;
            if(y==60)
            {
                y=0;
                x++;
                if(x==24)x=0;
            }
            }


        }


    return 0;
}
