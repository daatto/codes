#include <bits/stdc++.h>

using namespace std;
int vis[1000];
int par[1000];
int dis[1000];
vector<int>g[1000];
int node=0,edge;
void path_print(int u)
{
    if(u==-1) return;
    path_print(par[u]);
    printf("%d ",u);
}
void bfs(int x)
{
    memset(vis,0,sizeof vis);
    vis[x]=1;
    par[x]=-1;
    dis[x]=0;
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                par[v]=u;
                dis[v]=1+dis[u];
                q.push(v);
            }

        }
        q.pop();
    }
    for(int i=1;i<=node;i++)
    {
        if(vis[i])
        path_print(i);
        printf("\n");
    }
}

int main()
{
    int a,b;
    while(cin>>a>>b && a!=0&&b!=0)
    {
        node=max(max(a,b),node);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    return 0;
}
