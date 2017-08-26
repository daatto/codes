#include <bits/stdc++.h>

using namespace std;

//hoy nai vai eda lav nai

int main()
{
    //cout << "Hello world!" << endl;
    long long int n,m,c=1;
    cin>>n>>m;
    long long int i=0;
    long long int x=n;
    while(1)
    {


    n=n-c;
    i++;
    if (n<=0) break;
    n=n+m;
    if(n>x) n=x;
    c++;

    }
    cout<<i<<endl;
    return 0;
}
