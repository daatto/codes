#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;
    int bull(0),cow(0);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    for(size_t i=0;i!=4;++i)
    {
        for(size_t j=0;j!=4;++j){
        if(a[i]==b[j]&&i==j){
            bull++;
        }
            if(a[i]==b[j]&&i!=j){
                cow++;
            }
        }
    }
    cout<<bull<<" "<<cow<<endl;
}
