#include <iostream>
#include <string.h>
using namespace std;
int n,m;

bool vis[101][101];
char d[101][101];
int dir[8][2]=
{
    {1,0},{-1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}
};
bool dfs(int x, int y)
{
    if(vis[x][y]==1)
    {
        return false;
    }
    if(d[x][y]=='*')
    {
        return false;
    }
    bool flag=false;
    if(d[x][y]=='@')
    {
        flag=true;
    }
    vis[x][y]=1;
    for(int i=0; i<8; i++)
    {
        int nx = dir[i][0]+x;
        int ny = dir[i][1]+y;
        if(nx>=0&&nx<n && ny>=0 && ny<m)
        {
            if(dfs(nx,ny))
            {
                flag=true;
            }
        }
    }
    return flag;
}
int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0 )
        {
            break;
        }
        for(int i=0; i<n; i++)
        {
            cin>>d[i];
        }
         memset(vis,0,sizeof(vis));
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(dfs(i,j))
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
