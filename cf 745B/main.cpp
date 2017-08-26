#include<bits/stdc++.h>


using namespace std;

typedef long long ll;

char grid[600][600];

int col[600],row[600];

int main ()
{


    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='X'){
                row[i]++;
                col[j]++;
            }
        }
    }
    set<int> r,c;
    for(int i=0,j=0;i<600,j<600;j++,i++){
        r.insert(row[i]);
        c.insert(col[j]);
    }
    if(c.size()==2 and r.size()==2){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
