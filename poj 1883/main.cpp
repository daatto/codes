#include<bits/stdc++.h>
using namespace std;
int gap;
bool vis[30];
vector<int> W[30];
void DFS(char x,char y,int count)
{
    if(x==y)
    {
        printf("/%c\n",x+'A');

        return ;
    }
    if(count==gap)
    {
        printf("%c ",y+'A');

        vis[y]=true;
        count=0;
    }
    for(int i=0; i<W[x].size(); i++)
        if(!vis[W[x][i]]&&W[x][i]!=y)
        {
            DFS(W[x][i],x,count+1);
            return ;
        }
    printf("/%c\n",x+'A');

}
int main()
{
    string str;
    while(cin>>str &&str[0]!='#')
    {
        for(int i=0; i<30; i++)
        {
            W[i].clear();
        }
        char c;
        for(int i=0; str[i]!='.';)
        {
            if(str[i]==':')
            {
                for(i++; str[i]!=';'&&str[i]!='.'; i++)
                {
                    W[c-'A'].push_back(str[i]-'A');
                }
            }
            else
                c=str[i++];
        }
        char monster,man;
        cin>>monster>>man>>gap;
        memset(vis,false,sizeof(vis));
        DFS(monster-'A',man-'A',0);
    }
    return 0;
}
