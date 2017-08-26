#include <bits/stdc++.h>

using namespace std;
string s;
int n;
bool vis[27];
void rec(int ii){
if(n==ii){
    cout<<s<<endl;
    return;
}
for(int i=0;i<n;i++){
    if(vis[i])
        continue;
    vis[i]=true;
    s+=char('a'+i);
    rec(ii+1);
    vis[i]=false;
    s.pop_back();
}


}

int main()
{
    cin>>n;
    memset(vis,false,sizeof(vis));

    rec(0);
}
