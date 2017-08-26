#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,num=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a+b+c)>1){
            num++;
        }

    }
    cout<<num<<"\n";
    return 0;
}
