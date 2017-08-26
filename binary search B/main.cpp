#include<bits/stdc++.h>

using namespace std;
int n,a[100009];
bool f(int num)
{ for(int i=0;i<n;i++){
     if(a[i]-a[i-1]==num){ num--; }
     else if(a[i]-a[i-1]>num){ return false; } }
      if(num>=0){ return true; }

}

int main()
{
    int t;
    cin>>t;
    //if(t>500) return 0;
    //else
    {
        int j=1,check=0;

        while(t--)
        {

            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }

            cout<<"Case "<<j<<": ";
            int lo=0,hi=a[n-1],mid;
            while(lo<=hi)
            {
                mid=(hi+lo)/2;
                int k=0;
                if(f(mid)==true)
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
                if(f(hi)==false)
                {
                    cout<<mid<<endl;
                    check=1;
                    break;
                }

            }
            if(check==0){
                cout<<hi<<endl;
            }
            j++;

        }



    }
    return 0;
}
