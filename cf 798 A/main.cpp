#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    string s;
    cin>>s;
      if(s.size() %2!=0)
    {
       int c=0,j=s.size()-1;
        for(int i=0;i<s.size()/2;i++)
        {
             if(j<=s.size()/2) break  ;
            {
                if(s[i]!=s[j])
                    c++;
            }
            j--;
        }
        if(c>1) cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
    {
       int c=0,j=s.size()-1;
        for(int i=0;i<s.size()/2;i++)
        {
             if(j<s.size()/2) break  ;
            {
                if(s[i]!=s[j])
                    c++;
            }
            j--;
        }
        if(c>1) cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
//for(int j=s.size()-1;j>=s.size()/2 ;j--)
