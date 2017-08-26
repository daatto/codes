#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[100000];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        while(a[i]>3){
        if(a[i]%2==0)
            a[i]/=2;
        if(a[i]%3==0)
            a[i]/=3;
        }

    }

       for(int i=0;i<n;i++)
       {

       for(int j=1;j<n;j++)
       {
           if(a[i]==a[j])
            {cout<<"YES"<<endl;
           return 0;}
           else
           {
               cout<<"NO"<<endl;
               return 0;
           }
       }
       }
}
