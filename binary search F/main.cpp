#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[100001];

    scanf("%d",&t);
    if(t>5) return 0;
    else{
    for(int j=1;j<=t;j++)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }
       printf("Case %d:\n",j);
        while(q--)
        {
            int y,z;
            scanf("%d %d",&y,&z);
            y=lower_bound(a,a+n,y)-a;
			z=upper_bound(a+y,a+n,z)-a;
			printf("%d\n",abs(y-z));
        }
    }
    }
    return 0;
}

