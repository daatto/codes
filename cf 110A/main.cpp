
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s,n;
    cin>>n;
    s=n.length();
    int count=0;

    for(int i=0;i<s.length();i++){
    if(s[i]==4||s[i]==7)
        count++;
    }
    cout<<(count==s.length() ? "YES" : "NO")<<endl;
    return 0;

}
