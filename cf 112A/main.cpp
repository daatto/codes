#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
    cin>>s1>>s2;
    int test[s1.size()];
    int tmp;
    for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(int i=0;i<s1.size();i++){
    if(s1[i]==s2[i]) test[i]=0;
    else if(s1[i]<s2[i]) test[i]=-1;
    else test[i]=1;
    }
    if(test[s1.size()-1]==0)
        tmp=0;
    for(int i=0;i<s1.size();i++){
            if(test[i]!=0){
                tmp=test[i];
                break;
            }
    }
    cout<<tmp<<endl;
    return 0;
}
