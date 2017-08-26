#include <bits/stdc++.h>
using namespace std;
vector<int>vec[100];
bool vis[100];
int par[100];
void bfs(int src)
{
    queue<int>myq;
    myq.push(src);
    vis[src]=1;
    par[src]=-1;
    while(myq.size())
    {
        int u = myq.front();
        myq.pop();
        for(int i=0; i<vec[u].size(); i++)
        {
            int v=vec[u][i];
            if(vis[v])continue;
            myq.push(v);
            vis[v]=1;
            par[v]=u;
        }
    }
}
int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    string buffer;
    getline (cin,buffer);
    getline (cin,buffer);
    while(t--)
    {
        for(int i=0;i<=100;i++)
        {
            vec[i].clear();
        }
        set<char>ss;
        vector<string>vv;
        string s;

        while(getline(cin,s) && !s.empty())

        {

            if(s.size()==2)
            {

                if(s[0]!=s[1]){
                ss.insert(s[0]);
                ss.insert(s[1]);}

            }
            else
                {

                    ss.insert(s[0]);
                }

            vv.push_back(s);
        }

        int u,v;
        for(int i=0; i<vv.size(); i++)
        {
            string s=vv[i];
            if(s.size()==2)
            {
                u=s[0]-65+1;
                v=s[1]-65+1;
                //cout<<u<<" "<<v<<endl;
                vec[u].push_back(v);
                vec[v].push_back(u);
            }
        }
        int c=0;
        //cout<<vis[1]<<" "<<vis[2]<<" "<<vis[3]<<" "<<vis[4]<<endl;
        for(int i=1; i<=ss.size(); i++)
        {
            if(vis[i]==0)
            {
                c++;
                //cout<<c<<endl;
                bfs(i);
            }
        }
        cout<<c<<endl;
        //vv.clear();
        //ss.clear();
        cout<<endl;

    }
    return 0;
}
