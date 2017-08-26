#include <iostream>

using namespace std;

int main()
{
    int n,m,a[10],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {

    for(int j=1;j<n;j++)
    {
        sum+=a[j];
    }
    if(sum%m==0){
        cout<<"YES"<<endl;
        return 0;
        }
    else
        {
            cout<<"NO"<<endl;
            return 0;
            }
    }
}
