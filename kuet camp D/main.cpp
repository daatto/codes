#include <iostream>

using namespace std;
int f(int n){
return (n*(n+1))/2;

}

int main()
{
    int n,i=1;
    cin>>n;
    int z=0;
    if(n==1) {cout<<1<<endl;
    return 0;}
    else
    while(i++)
    {
        z+=f(i);
        if(z>=n)
        break;

    }

cout<<i-1<<endl;
    return 0;
}
