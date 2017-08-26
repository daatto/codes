#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
       // vector<int >u;
            vector<int>v;
          // vector<int>w;
        cin>>a>>b;
        while(b--)
        {

            int x,y;
            cin>>x>>y;
            v.push_back(x);
            v.push_back(y);
        }
        //sort(u.begin(),u.end());
        sort(v.begin(),v.end());
        int c=0;
        cout<<"Case "<<i<<": ";
        for(int j=1;j<=a;j++)
        {
            std::vector<int>::iterator low,up;
            low=std::lower_bound (v.begin(), v.end(), j);
            up= std::upper_bound (v.begin(), v.end(), j);
            int x=up-low;
            if(x>0 && x%2==0) c++;
            else if(x>0 && x%2==1) c+=x/2;
        }

        cout<<a-c<<endl;
    }
    return 0;
}
