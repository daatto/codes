#include <iostream>
#include<string>
#include<algorithm>

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='b' || s[i]!='r')
        {
            return 0;
        }

    }



    return 0;
}
