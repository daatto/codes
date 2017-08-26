#include <bits/stdc++.h>
using namespace std;
int s[1000];
int c=-1;
push(int x)
{
    c++;
    s[c]=x;
}
int top()
{
    return s[c];
}
void pop()
{
    c--;
}
class graph
{
int V;
vector<int>*adj;
void dfstill(int v,bool visited[]);
void topostill(int v,bool visited[],int s[]);
public:
    graph(int V);
    void addedge(int v,int w);
    void dfs(int v);
    void topologicalsort();
};

graph::graph(int V)
{
    this->V=V;
    adj=new vector<int>[V];
}

void graph::addedge(int v,int w)
{
    adj[v].push_back(w);
}

void graph::dfstill(int v,bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";
    vector<int> :: iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i)
        if(!visited[*i])
             dfstill(*i,visited);
}

void graph::dfs(int v)
{
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;

    dfstill(v,visited);
}
void graph:: topostill(int v,bool visited[],int s[])
{
    visited[v]=true;
    vector<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i)
        if(!visited[*i])
             topostill(*i,visited,s);

    push(v);
}
void graph::topologicalsort()
{
     bool *visited=new bool[V];
    for(int i=0;i<V;i++)
        visited[i]=false;
     for(int i=0;i<V;i++)
     {
         if(visited[i]==false)
            topostill(i,visited,s);
     }
     while(c>-1)
     {
         cout<<top()<<" ";
         pop();
     }
}
int main()
{
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    graph g(n);
    int m;
    cout<<"enter the number of edges"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int v,w;
        cin>>v>>w;
        g.addedge(v,w);
    }
    cout<<"from topological sort"<<endl;
     g.topologicalsort();
     cout<<endl;
     int x;
     cout<<"enter a vertex to start dfs"<<endl;
     cin>>x;
    cout << "Following is Depth First Traversal (starting from vertex x) \n";
    g.dfs(4);
    return 0;
}
