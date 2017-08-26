#include<bits/stdc++.h>
using namespace std;

int mark[1000001];
vector<int> prime;
void seive()
{
    int i,j,limit=sqrt(1000000*1.0)+2;
    mark[1]=1;
    prime.push_back(2);
    for(i=4; i<=1000000; i+=2)
    {
        mark[i]=1;
    }

    for(i=3; i<=1000000; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i*i; j<=1000000; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
}

int main()
{
    seive();
    vector<int> v;
    for(int i=0;i<prime.size();i++) {

            cout<<prime[i]<<endl;}
}
