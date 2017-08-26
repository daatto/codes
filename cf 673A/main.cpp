#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[90];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>15) cout<<15<<endl;
    for(int i=0;i<n;i++)

    {

        if((a[i+1]-a[i])>15) cout<<a[i]+15<<endl;
 break;
if(a[n-1]==90) cout<<90<<endl;
    }

    return 0;
}
