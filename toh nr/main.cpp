#include<bits/stdc++.h>
using namespace std;
int moves=0;
void hannoi(int m,string BEG,string AUX, string END)
{
    moves++;
    if(m==1)
    {
        cout<<"move disc "<<m<<" from "<<BEG<<" to "<<END<<endl;
    }
    else
    {
        hannoi(m-1,BEG,END,AUX);
        cout<<"move disc "<<m<<" from "<<BEG<<" to "<<END<<endl;
        hannoi(m-1,AUX,BEG,END);
    }
}
int main()
{
    int n;
    cout<<"enter disc"<<endl;
    cin>>n;
    string a,b,c;
    cout<<"enter disc name"<<endl;
    cin>>a>>b>>c;
    hannoi(n,a,b,c);
    cout<<"moves: "<<moves<<endl;
}
