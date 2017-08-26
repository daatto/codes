#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int a[30];
    int b[30];
    int n;
    cin>>n;

    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<s1.size();i++)
        {
            a[s1[i]-97]++;
        }
        for(int j=0;j<s2.size();j++)
        {
            b[s2[j]-97]++;
        }
        int c(0);
        for(int k=0;k<26;k++)
        {
            c+=abs(a[k]-b[k]);
        }
        cout<<c<<endl;
    }

    return 0;
}
