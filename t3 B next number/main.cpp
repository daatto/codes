#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int t,n,i,j,o;
    long long x,ans,mul;
    bool a[100];
    bool b[100];
    scanf("%d",&t);
    for(int p=1;p<=t;p++)
    {
        scanf("%d",&x);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        n=0;
        o=0;
        ans=0;
        mul=1;
        while(x)
        {
            if(x%2==0)
            {
                a[n]=0;
            }
            else
            {
                a[n]=1;
            }
            n++;
            x=x/2;
        }

        i=0;
        j=1;
        while(1)
        {
            if(a[i]==1 and a[j]==0)
            {
                break;
            }
            if(a[i]==1)
                o++;
            i++;
            j++;
        }
        for(int k=0;k<o;k++)
        {
            b[k]=1;
        }
        b[j]=1;
        for(int k=j+1; k<=n+1;k++){
        b[k]=a[k];
        }
        for(int i=0;i<=n+1;i++,mul=mul*2)
        {
            ans+=b[i]*mul;
        }
        printf("Case %d: %lld\n" ,p,ans);

    }
    return 0;
}
