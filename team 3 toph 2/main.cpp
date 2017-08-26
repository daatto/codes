#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if((a>=b)&&((a%b)==0))
        return b;
    else
        gcd(b,(a%b));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {

                if(gcd(j,i)==1)
                    count++;
            }
        }
        cout<<(count/2)+2<<endl;
    }
    return 0;
}
