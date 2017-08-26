#include <iostream>

using namespace std;

int main()
{
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++)
        {
            while(i>0)
            {
                sum+=i%10;
                i/=10;
            }
            sum+=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
