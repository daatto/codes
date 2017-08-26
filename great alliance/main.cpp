#include <bits/stdc++.h>
#include <string>
#include <algorithm>


using namespace std;
int seat[150] ,prob[100];
double ans[151];
int main()
{
    int t,n,p,s;
    double m;
    scanf("%d" ,&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d" ,&n);
        for(p=0;p<n;p++)
            scanf("%d %d" ,&seat[p],&prob[p]);

 memset(ans,0,sizeof(ans));
        ans[0]=1;
        for(p=0;p<n;p++)

            for(s=150;s>=seat[p];s--)
                ans[s]=max(ans[s],(prob[p]/100)*ans[s-seat[p]]);
        m=0;


        for(s=150;s>75;s--)
            m=max(m,ans[s]);

     printf("%.6lf" ,m*100.0);
    }
    return 0;
}
