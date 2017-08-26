#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        string s[100];
        for(int j=0; j<n; j++)

        {
            cin>>s[j];
        }
        sort(s.begin(),s.end());
        for(int p=0; p<n; p++)
        {
           for(int q=0;q<n;q++)
           {
               if(p!=q && s[p]==s[q])
                string a=s[p];
           }
        }
        cout<<a;

}
return 0;
}
