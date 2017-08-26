#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    return b==0? a:gcd(b,a%b);
}

int main()
{

    int a1=1234567/gcd(1234567,123456);
    int b1=123456/gcd(1234567,123456);

    int n;
    cin>>n;
    if(n<1234567)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i++)
    {
        for(int j=0;j++)
        {
            for(int k=0;k++)
            {
                if(1234567*i+123456*j+1234*k==n)
                {
                    cout<<"YES"<<endl;
                }

            }
        }
    }
    return 0;
}
