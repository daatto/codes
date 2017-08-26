#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"insert a number to find"<<endl;
    int x;
    cin>>x;
    int high=n,low=0,mid;
    int c=0,q=0;
    while(low<=high)
    {
        mid=(high+low)/2;
        c++;
        if(x==a[mid]) {q=1;break;}
        else if(x<a[mid]) high=mid-1;
        else
            low=mid+1;
    }
    if(q==1){ cout<<"the number is found"<<endl;
    cout<<"from binary search iteration number :"<<c<<endl;}
    else
    {
         cout<<"the number is not found"<<endl;
    cout<<"from binary search iteration number :"<<c<<endl;
    }
    c=0;q=0;
    for(int i=0;i<n;i++)
    {
        c++;
        if(a[i]==x){ q=1; break;}
    }
    if(q==1){ cout<<"the number is found"<<endl;
    cout<<"from linear search iteration number :"<<c<<endl;}
    else
    {
         cout<<"the number is not found"<<endl;
    cout<<"from linear search iteration number :"<<c<<endl;
    }
    return 0;
}
