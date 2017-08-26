#include <iostream>
#include <algorithm>

using namespace std;
int a[10000];

int main()
{
    int t;
    long long m;
    while(cin>>t){
    for(int i=0;i<t;i++){
    cin>>a[i];
    }
    sort(a,a+t);
    cin>>m;
    int i=0,j=t-1;
    int b1,b2;
    while(i<j)
    {
        if(a[i]+a[j]<m)
            ++i;
        else if(a[i]+a[j]==m)
        {
            b1=i;
            b2=j;
            ++i; --j;
        }
        else
            --j;
    }
   cout<<"peter should buy books whose  prices are "<<a[b1]<<" and "<<a[b2]<<".\n\n";
    }

}
