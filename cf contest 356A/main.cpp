#include <iostream>

using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
    cin>>a[i];
    if(a[i]>a[i+1]){
    swap(a[i],a[i+1]);
    }
    }
    int sum=a[0]+a[1]+a[2]+a[3]+a[4],count=0;
    for(int i=4;i>=0;i--)
    {
            for(int j=3;j>=0;j--){
            if(a[j]==a[i])
            {
                sum-=a[i];
                count++;
            }
            if(count<=3)
            {
                break;
            }
        }
    }
    cout<<sum<<endl;

}
