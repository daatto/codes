#include <iostream>

using namespace std;

int main()
{
    int k;
    int a[12],ans=-1;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    for(int m=0;m<(1<<12) ;m++)
    {
        int sum=0,cont=0;
        for(int i=0;i<12;i++)
            if(m>>i&1)
        {
            sum+=a[i];
            ++cont;
        }
              if(sum>=k;&&(ans==-1||cont<ans)) ans=cont;
    }
    cout<<ans<<endl;
    return 0;
}
