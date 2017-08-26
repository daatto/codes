#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t,l;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=(int) sqrt(s.length());

            for(int j=1;j<=l;j++)
            {


                for(int i=1;i<=l;i++)
            {
                cout<<s[(l*j)-i]<<endl;
            }
            }


    }
    return 0;
}
