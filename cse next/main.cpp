#include <bits/stdc++.h>

using namespace std;
int dp[10001];
unsigned long long f(int n)
{
     if(n==0||n==1) return 1;
    /*if(dp[n]!=-1) return dp[n];
    return dp[n]=n*f(n-1);*/
    else if(n==2) return 2;
    else if(n==3) return 6;
    else if(n==4) return 24;
    else if(n==5) return 120;
    else if(n==6) return 720;
    else if(n==7) return 5040;
    else if(n==8) return 20320;
    else if(n==9) return 362880;


}

int main()
{
    int n,m;
    for(int i=1;i<=450;i++)
    {

        cin>>n>>m;
        memset(dp,-1,sizeof(dp));
        if(n==0 && m==0) return 0;
        if(n>1000 || m>1000) return 0;

        else
        {

            //int x,y;
            unsigned long long p=1,q=1;
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                if(x>9) return 0;
                p=p*f(x);
            }
            for(int i=0;i<m;i++)
            {
                int y;
                cin>>y;
                if(y>9) return 0;
                q=q*f(y);
            }
            if(p==q) cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }
    }
    return 0;
}
